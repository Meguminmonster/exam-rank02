/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:58:55 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/24 17:20:33 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			printf("%d", n1 + n2);
		else if (argv[2][0] == '-')
			printf("%d", n1 - n2);
		else if (argv[2][0] == '*')
			printf("%d", n1 * n2);
		else if (argv[2][0] == '/')
			printf("%d", n1 / n2);
		else if (argv[2][0] == '%')
			printf("%d", n1 % n2);
	}
	printf("\n");
	return (0);
}
