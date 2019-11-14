/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:01:58 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/05 18:02:00 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = 0;
	array = (int*)malloc(length * sizeof(int));
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
