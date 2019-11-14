/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:16:01 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/29 22:08:09 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int str_i;
	int indexer;
	int to_find_i;

	str_i = 0;
	to_find_i = 0;
	while (str[str_i] != '\0')
	{
		indexer = str_i;
		while (to_find[to_find_i] == str[indexer] && to_find[to_find_i] != '\0')
		{
			to_find_i++;
			indexer++;
		}
		if (to_find[to_find_i] == '\0')
			return (str[str_i]);
		else
		{
			to_find_i = 0;
			str_i++;
		}
	}
	return (NULL);
}
