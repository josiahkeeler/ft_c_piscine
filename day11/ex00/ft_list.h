/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:11:52 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/06 16:11:55 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define FT_LIST_H
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

ft_list	ft_create_elem(void *data);

#endif
