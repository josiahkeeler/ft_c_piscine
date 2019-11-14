/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:29:42 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/05 21:29:43 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/do_op_header.h"

int	ft_check_op(char *op)
{
	char operator;

	operator = op[0];
	if (operator == '+')
		return (1);
	else if (operator == '-')
		return (2);
	else if (operator == '*')
		return (3);
	else if (operator == '/')
		return (4);
	else if (operator == '%')
		return (5);
	else
		return (0);
}
int	zero(int x, int y)
{
	x = 0;
	y = 0;
	return (0);
}

int do_mafths(char **argv)
{
	int (*operations[6])(int, int);
	int x;
	int y;
	int op;

	operations[0] = &zero;
	operations[1] = &add;
	operations[2] = &sub;
	operations[3] = &mult;
	operations[4] = &div;
	operations[5] = &mod;
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	op = ft_check_op(argv[2]);
	if ((y == 0 && op == 4) || (y == 0 && op == 5))
	{
		ft_putstr("Stop : division by zero");
		return (2147483646);
	}
	return (operations[op](x, y));
}

int main(int argc, char *argv[])
{
	int res;
	if (argc != 4)
		return (0);
	res = (do_mafths(argv));
	if (res == 2147483646)
		return (0);
	ft_putnbr(res);
	return (0);
}
