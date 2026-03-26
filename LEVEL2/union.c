/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:41:01 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/26 16:57:00 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(int c, char *str, int index)
{
	int	i;

	i = 0;
	while (str[i] && (index == -1 || i < index))
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (check(argv[1][i], argv[1], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (check(argv[2][i], argv[1], -1) && check(argv[2][i], argv[2], i))
				write (1, &argv[2][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
