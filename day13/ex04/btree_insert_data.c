/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:11:20 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/08 16:11:22 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *temp;

	if (*root)
	{
		temp = *root;
		if (cmpf(temp->item, item) < 0)
		{
			if (temp->left)
				btree_insert_data(&temp->left, item, cmpf);
				temp->left = btree_create_node(item);
			}
			if (cmpf(temp->item, item) >= 0)
			{
				if (temp->right)
				btree_insert_data(&temp->left, item, cmpf);
				temp->right = btree_create_node(item);
			}
	}
	else
		*root = btree_create_node(item);
}
