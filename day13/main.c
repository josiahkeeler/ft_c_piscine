/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:31:23 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/06 20:31:29 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jk_header.h"
#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void	print_tree(void *str)
{
	ft_putstr((char*)str);
	ft_putchar('\n');
}

int void_cmp(void *str1, void *str2)
{
	return(ft_strcmp((char*)str1, (char*)str2));
}
int	main(void)
{
	t_btree *one, *two, *three, *four, *five;

	one = btree_create_node("1");
	two = btree_create_node("2");
	three = btree_create_node("3");
	four = btree_create_node("4");
	five = btree_create_node("5");
	one->left = two;
	one->right = three;
	two->left = four;
	two->right = five;
	btree_insert_data(&one, "6", &void_cmp);
	btree_apply_suffix(one, &print_tree);
	return (0);
}
