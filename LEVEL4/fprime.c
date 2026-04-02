/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 19:01:29 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/02 19:05:59 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		printf("1");
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			if (nb != i)
				printf("*");
			nb /= i;
			i--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
