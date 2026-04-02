/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 19:59:51 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/02 20:21:56 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i]) && is_sep(str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	res = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		j = i;
		while (str[i] && !is_sep(str[i]))
			i++;
		if (i > j)
			res[k++] = ft_strncpy(&str[j], i - j);
	}
	res[k] = NULL;
	return (res);
}
