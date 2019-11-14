/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:59:33 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/08 11:56:16 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *plant;

	plant = (t_btree*)malloc(sizeof(t_btree));
	if (plant)
	{
		plant->left = 0;
		plant->right = 0;
		plant->item = item;
	}
	return (plant);
}
