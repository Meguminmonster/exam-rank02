/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:14:40 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/24 14:38:50 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	main(int argc, char **argv)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				b = (argv[1][i] - 96);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				b = (argv[1][i] - 64);
			else if (b == 0)
				write(1, &argv[1][i], 1);
			while (b != 0)
			{
				write(1, &argv[1][i], 1);
				b--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
