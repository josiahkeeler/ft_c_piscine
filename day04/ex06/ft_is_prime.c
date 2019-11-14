/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 21:32:43 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/26 21:55:54 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisor;

	if (nb < 2)
	{
		return (0);
	}
	divisor = 2;
	while (nb % divisor != 0 && divisor < nb / 2)
	{
		divisor++;
	}
	if (divisor == nb / 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
