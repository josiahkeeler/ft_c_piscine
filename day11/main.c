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
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

void print_list(t_list **head)
{
	t_list *start;
	 start = *head;

	ft_putstr((char*)start->data);
	ft_putchar('\n');
	if (start->next)
		print_list(&start->next);
}


int	main(void)
{
		t_list *pewdiepie, *vs;

		vs = ft_create_elem("versus");
		pewdiepie = ft_create_elem("PewDiePie");
		vs->next = pewdiepie;
		pewdiepie->next = NULL;
		ft_list_push_front(&vs, "T Series");
		print_list(&vs);
		return (0);
}
