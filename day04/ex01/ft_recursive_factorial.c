/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:22:09 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/26 21:23:54 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int temp;

	temp = 1;
	if (nb > 0 && nb < 13)
	{
		temp = nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		return (temp);
	}
}
