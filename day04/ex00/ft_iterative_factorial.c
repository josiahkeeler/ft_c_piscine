/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 11:31:42 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/26 19:27:43 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int temp;

	temp = 1;
	while (nb > 0 && nb < 13)
	{
		temp = temp * nb;
		nb--;
	}
	if (nb == 0)
	{
		return (temp);
	}
	else
	{
		return (0);
	}
}
