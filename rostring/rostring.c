/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:03:16 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/11 17:31:29 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_word(char *s, int start, int end)
{
	while (start < end)
		write(1, &s[start++], 1);
}

int	skip_spaces(char *s, int i)
{
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	return (i);
}

void	rostring(char *s)
{
	int	i;
	int	start;
	int	end;
	int	flag;

	flag = 0;
	i = skip_spaces(s, 0);
	start = i;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
		i++;
	end = i;
	i = skip_spaces(s, i);
	while (s[i])
	{
		if (flag++)
			write(1, " ", 1);
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			write(1, &s[i++], 1);
		i = skip_spaces(s, i);
	}
	if (start < end && flag)
		write(1, " ", 1);
	put_word(s, start, end);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
