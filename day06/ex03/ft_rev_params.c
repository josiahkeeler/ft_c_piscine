/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 21:39:33 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/30 21:47:50 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rev_params(int argc, char **str)
{
	int i;
	int j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	ft_rev_params(argc, argv);
	return (0);
}
