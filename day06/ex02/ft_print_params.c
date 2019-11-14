/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 21:12:17 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/30 21:38:24 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **str)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	ft_print_params(argc, argv);
	return (0);
}
