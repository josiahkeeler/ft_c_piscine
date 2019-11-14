/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:30:56 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/24 21:03:59 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';

	while (a <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(',');
		ft_putchar(' ');
		if (d == '9')
		{
			c++;
			d = '0';
		}
		if (c == '9')
		{
			b++;
			c = '0';
		}
		if (b == '9')
		{
			a++;
			b = '0';
		}
		d++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
