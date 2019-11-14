/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:48:22 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/31 10:44:38 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *str)
{
	int i;

	i = 0;
	while (i != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_print_program_name(argv[0]);
	return (0);
}
