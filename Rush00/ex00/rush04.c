/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:20:02 by luzhang           #+#    #+#             */
/*   Updated: 2019/10/27 15:35:01 by luzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_print_line(int x, char start, char middle, char end)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(start);
		else if (i == x - 1)
			ft_putchar(end);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (j == 0)
			rush_print_line(x, 'A', 'B', 'C');
		else if (j == y - 1)
			rush_print_line(x, 'C', 'B', 'A');
		else
			rush_print_line(x, 'B', ' ', 'B');
		j++;
	}
}