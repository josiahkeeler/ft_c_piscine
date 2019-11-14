/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 21:51:47 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/31 14:44:09 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int argc, char **str)
{
	int check;
	int i;
	int checkcount;
	char *temp;

	checkcount = -1;
	i = 1;
	while (checkcount != 0)
	{
		checkcount = 0;
		while (i < argc - 1)
		{
			check = ft_strcmp(str[i], str[i + 1]);
			if (check > 0)
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				check++;
			}
			i++;
		}
		i = 1;
	}
}

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
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
