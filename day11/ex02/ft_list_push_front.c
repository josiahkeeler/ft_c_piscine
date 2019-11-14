/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:00:50 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/07 14:01:46 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *start;

	start = *begin_list;
	if (start == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		start = ft_create_elem(data);
		start->next = *begin_list;
		*begin_list = start;
	}
}
