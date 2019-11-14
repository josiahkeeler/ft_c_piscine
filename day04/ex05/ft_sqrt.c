/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:12:50 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/26 21:29:43 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int counter;

	counter = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (nb > counter * counter)
	{
		counter++;
	}
	if (nb != counter * counter)
	{
		return (0);
	}
	else
	{
		return (counter);
	}
}
