/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:37:45 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/01 17:20:54 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int nxt;
	nxt = hour + 1;

	if (hour >= 0 && hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i:00 AM and %i:00 AM.\n", hour, nxt);
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i:00 AM and %i:00 PM.\n", hour, nxt);
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i:00 PM and 1:00 PM.\n", hour);
	else if (hour > 12 && hour < 23)
	{
		hour = hour - 12;
		nxt = hour + 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i:00 PM and %i:00 PM.\n", hour, nxt);
	}
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11:00 PM and 12:00 AM.\n");
}

int		main(void)
{
	ft_takes_place(0);
	ft_takes_place(13);
	ft_takes_place(10);
	ft_takes_place(12);
	ft_takes_place(13);
	ft_takes_place(14);
	ft_takes_place(15);
	ft_takes_place(22);
	ft_takes_place(23);
	ft_takes_place(21);
	ft_takes_place(23);
	return (0);
}

