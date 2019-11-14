/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:16:21 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/10 16:16:26 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int main(void)
{
	char *input;
	int x;
	int y;
	int array[5];

	input = stdin_to_str();
	x = row_count(input);
	y = col_count(input);
	ft_putnbr(x);
	ft_putnbr(y);
	array[0] = check_rush00(x, y, input);
	array[1] = check_rush01(x, y, input);
	array[2] = check_rush02(x, y, input);
	array[3] = check_rush03(x, y, input);
	array[4] = check_rush04(x, y, input);
	ft_putnbr(array[0]);
	ft_check01(input, array);
	ft_check02(input, array);
	ft_putchar('\n');
}
