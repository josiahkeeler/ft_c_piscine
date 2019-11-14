/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:19:59 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/10 14:57:18 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_result(char *str, int a, int b)
{
	ft_putstr("[");
	ft_putstr(str);
	ft_putstr("] [");
	ft_putnbr(a);
	ft_putstr("] [");
	ft_putnbr(b);
	ft_putstr("]");
}
