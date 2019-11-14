/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:17:11 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/06 20:17:15 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *start; /* pointer for start of list */

	start = *begin_list; /* using start so I don't mess up original pointer*/
	if (start == NULL) /* if there is no node make one */
		*begin_list = ft_create_elem(data);
	else if (start->next == NULL) /* append if current points to null */
			start->next = ft_create_elem(data);
	else /* traverse list recursively */
		ft_list_push_back(&start->next, data);
}
