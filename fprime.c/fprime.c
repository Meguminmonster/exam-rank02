/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 13:46:16 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/11 13:52:19 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int	i;

	if (nb == 1)
	{
		printf("1");
		return ;
	}
	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			if (nb != i)
				printf("*");
			nb = nb / i;
		}
		else
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
