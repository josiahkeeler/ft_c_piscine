/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 22:19:12 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/31 22:28:48 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int dif;
	int i;

	dif = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int*)malloc((dif) * sizeof(int));
	i = 0;
	if (!(*range))
		return (0);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (dif);
}
