/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 09:39:31 by luzhang           #+#    #+#             */
/*   Updated: 2019/10/27 14:13:30 by luzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	rush_print_line(int x, char *pieces, char *arr, int z)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			arr[z] = pieces[0];
		else if (i == x - 1)
			arr[z] = pieces[2];
		else
			arr[z] = pieces[1];
		i++;
		z++;
	}
	arr[z] = '\n';
	z++;
	return (z);
}

char	*rush00(int x, int y)
{
	int j;
	int z;
	char *arr;
	char str[(x * y) + 1];
	char top[3] = {'o', '-', 'o'};
	char bot[3] = {'o', '-', 'o'};
	char mid[3] = {'|', ' ', '|'};

	j = 0;
	z = 0;
	arr = str;
	while (j < y)
	{
		if (j == 0)
			z = rush_print_line(x, top, arr, z);
		else if (j == y - 1)
			z = rush_print_line(x, bot, arr, z);
		else
			z = rush_print_line(x, mid, arr, z);
		j++;
		write(1, arr, 0);
	}
	return (arr);
}
