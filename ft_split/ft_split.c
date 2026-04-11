/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:33:23 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/11 16:52:13 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str && !is_space(*str))
		{
			count++;
			while (*str && !is_space(*str))
				str++;
		}
	}
	return (count);
}

char	*copy_word(char *str)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] && !is_space(str[len]))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str && !is_space(*str))
		{
			result[i] = copy_word(str);
			i++;
			while (*str && !is_space(*str))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}
