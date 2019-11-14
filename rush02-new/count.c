/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:04:32 by gkhodizo          #+#    #+#             */
/*   Updated: 2019/11/10 15:04:33 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		row_count(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int		col_count(char *str)
{
	int start;
	int count;
	int len;
	int	i;

	start = (-1);
	count = 0;
	i = 0;
	len = ft_strlen(str);

	while (i < len)
	{
		while ((str[++start] != '\0') && (str[++start] != '\n'));
		count++;
		i = start;
	}
	return (count - 1);
}
