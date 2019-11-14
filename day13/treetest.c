/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:53:26 by bekim             #+#    #+#             */
/*   Updated: 2019/11/08 15:27:50 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
​
#include <stdio.h>
#include "ex00/ft_btree.h"
#include "ex00/btree_create_node.c"
#include "ex01/btree_apply_prefix.c"
//#include "ex02/btree_apply_infix.c"
//#include "ex03/btree_apply_suffix.c"
//#include "ex04/btree_insert_data.c"
​
void		print_item_at_node(void *item)
{
	// assume they are integers
	printf("%d ", *(int *)item);
}
​
int			compare_items(void *item1, void *item2)
{
	// assume they are integers
	int num0;
	int num1;
​
	num0 = *(int *) item1;
	num1 = *(int *) item2;
	return (num0 - num1);
}
​
int			main()
{
	int a0 = 0;
	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	int a4 = 4;
	int a5 = 5;
	int a6 = 6;
	int a7 = 7;
	t_btree *node0 = btree_create_node(&a0);
	t_btree *node1 = btree_create_node(&a1);
	t_btree *node2 = btree_create_node(&a2);
	t_btree *node3 = btree_create_node(&a3);
	t_btree *node4 = btree_create_node(&a4);
	t_btree *node5 = btree_create_node(&a5);
	t_btree *node6 = btree_create_node(&a6);
​
	t_btree **tree = (t_btree**)malloc(sizeof(t_btree*));
	node3->left = node1;
	node3->right = node5;
	node1->left = node0;
	node1->right = node2;
	node5->left = node4;
	node5->right = node6;
	*tree = node3;
	printf("\nRECEIVED:	");
	btree_apply_prefix(node0, print_item_at_node);
	printf("\nEXPECTED:	0\n");
​
	printf("\nRECEIVED:	");
	btree_apply_prefix(node3, print_item_at_node);
	printf("\nEXPECTED:	3 1 0 2 5 4 6\n");
​
// 	printf("\nRECEIVED:	");
// 	btree_apply_infix(node0, print_item_at_node);
// 	printf("\nEXPECTED:	0\n");
// ​
// 	printf("\nRECEIVED:	");
// 	btree_apply_infix(node3, print_item_at_node);
// 	printf("\nEXPECTED:	0 1 2 3 4 5 6\n");
// ​
// 	printf("\nRECEIVED:	");
// 	btree_apply_suffix(node0, print_item_at_node);
// 	printf("\nEXPECTED:	0\n");
// ​
// 	printf("\nRECEIVED:	");
// 	btree_apply_suffix(node3, print_item_at_node);
// 	printf("\nEXPECTED:	0 2 1 4 6 5 3\n");
// ​
// 	btree_insert_data(tree, &a7, compare_items);
// 	printf("\nRECEIVED:	");
// 	btree_apply_suffix(node3, print_item_at_node);
// 	printf("\nEXPECTED:	0 2 1 4 7 6 5 3\n");
​
// 	t_btree **tree1 = (t_btree**)malloc(sizeof(t_btree*));
// 	*tree1 = NULL;
// 	btree_insert_data(tree1, &a3, compare_items);
// 	btree_insert_data(tree1, &a1, compare_items);
// 	btree_insert_data(tree1, &a5, compare_items);
// 	btree_insert_data(tree1, &a0, compare_items);
// 	btree_insert_data(tree1, &a2, compare_items);
// 	btree_insert_data(tree1, &a4, compare_items);
// 	btree_insert_data(tree1, &a6, compare_items);
// 	btree_insert_data(tree1, &a7, compare_items);
// ​
// 	printf("\nTREE 1: RECEIVED:	");
// 	btree_apply_suffix(*tree1, print_item_at_node);
// ​
// 	printf("\nTREE 0: RECEIVED:	");
// 	btree_apply_suffix(node3, print_item_at_node);
}
