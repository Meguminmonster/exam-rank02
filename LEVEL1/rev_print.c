/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:41:03 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/24 14:59:43 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	main(int argc, char **argv)
{
	int	b;

	if (argc == 2)
	{
		b = ft_strlen(argv[1]) - 1;
		while (b >= 0)
		{
			write(1, &argv[1][b], 1);
			b--;
		}
	}
	write (1, "\n", 1);
}
