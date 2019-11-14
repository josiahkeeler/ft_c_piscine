/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:05:31 by luzhang           #+#    #+#             */
/*   Updated: 2019/10/27 15:18:48 by luzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_stdin(char c);

void	rush_print_line(int x, char start, char middle, char end)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_stdin(start);
		else if (i == x - 1)
			ft_stdin(end);
		else
			ft_stdin(middle);
		i++;
	}
	ft_stdin('\n');
}

void	rush03(int x, int y)
{
	int j;

	j = 0;
	while (j < y)
	{
		if (j == 0)
			rush_print_line(x, 'A', 'B', 'C');
		else if (j == y - 1)
			rush_print_line(x, 'A', 'B', 'C');
		else
			rush_print_line(x, 'B', ' ', 'B');
		j++;
	}
}
