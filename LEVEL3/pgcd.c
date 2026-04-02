/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:10:24 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/02 16:17:03 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	find_pgcd(int a, int b)
{
	int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	printf("%d", a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		find_pgcd(atoi(argv[1]), atoi(argv[2]));
	}
	printf("\n");
	return (0);
}
