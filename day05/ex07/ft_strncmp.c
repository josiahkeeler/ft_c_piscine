/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:25:37 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/29 22:50:44 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int size1;
	int size2;

	size1 = 0;
	size2 = 0;
	while (s1[size1] != '\0' && size1 < n)
		size1++;
	while (s2[size2] != '\0')
		size2++;
	return (size1 - size2);
}
