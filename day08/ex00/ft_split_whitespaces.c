/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 20:59:07 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/04 17:45:34 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	word_count(char *str)
{
	int start = 0;
	int end = 0;
	int word_count = 0;

	while (str[end] != '\0')
	{
		while (str[start] == '\t' || str[start] == ' '
				||  str[start] == '\n')
			start++;
		end = start;
		while (str[end] != '\t' && str[end] != ' '
				&& str[end] != '\n' && str[end] != '\0')
			end++;
		word_count++;
		start = end;
	}
	return (word_count);
}

void	word_str(char *str, char **words)
{
	int word_count = 0;
	int start = 0;
	int end = 0;
	int i = 0;

	while (str[end] != '\0')
	{
		i = 0;
		while (str[start] == '\t' || str[start] == ' '
				||  str[start] == '\n')
			start++;
		end = start;
		while (str[end] != '\t' && str[end] != ' '
				&& str[end] != '\n' && str[end] != '\0')
			end++;
		words[word_count] = (char*)malloc((end - start + 1) * sizeof(char));
		while (start < end)
		{
			words[word_count][i] = str[start];
			start++;
			i++;
		}
		words[word_count][i] = '\0';
		word_count++;
	}
}

char **ft_split_whitespaces(char *str)
{
	char **words;

	words = (char**)malloc(word_count(str) * sizeof(char *));
	word_str(str, words);
	printf("%s %s\n", words[0], words[1]);
	return (words);
}

int 	main(int argc, char *argv[])
{
	ft_split_whitespaces(argv[1]);
	return (0);
}
