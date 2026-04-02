/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 20:34:07 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/02 20:44:26 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_word(char *str, int start, int end)
{
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

void	process_others(char *str, int i)
{
	int	first;

	first = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (first)
				write(1, " ", 1);
			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				write(1, &str[i], 1);
				i++;
			}
			first = 1;
		}
		else
			i++;
	}
	if (first)
		write(1, " ", 1);
}

void	rostring(char *str)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	process_others(str, i);
	print_word(str, start, end);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
