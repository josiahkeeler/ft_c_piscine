/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:13:43 by gkhodizo          #+#    #+#             */
/*   Updated: 2019/11/10 15:13:47 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_check01(char *input, int *array)
{
	if (array[0] == 1)
		print_result("rush-00", row_count(input), col_count(input));
	if (array[1] == 1)
		print_result("rush-01", row_count(input), col_count(input));
}

void	ft_check02(char *input, int *array)
{
	int success_counter;

	success_counter = 0;
	if (array[2] == 1)
	{
		if (success_counter > 0)
			ft_putstr(" || ");
		print_result("rush-02", row_count(input), col_count(input));
		success_counter++;
	}
	if (array[3] == 1)
	{
		if (success_counter > 0)
			ft_putstr(" || ");
		print_result("rush-03", row_count(input), col_count(input));
		success_counter++;
	}
	if (array[4] == 1)
	{
		if (success_counter > 0)
			ft_putstr(" || ");
		print_result("rush-04", row_count(input), col_count(input));
		success_counter++;
	}
}
