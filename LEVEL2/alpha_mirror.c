/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:56:52 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/24 16:27:56 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
En ascii hay una suma especial que da el espejo. 
	'a' (97) debe ser 'z' (122). 	Suma: $97 + 122 = 219.
	'b' (98) debe ser 'y' (121). 	Suma: $98 + 121 = 219.
	'm' (109) debe ser 'n' (110). 	Suma: $109 + 110 = 219.
Por lo tanto podemos simplemente: 	219 - caracter_actual

Para las mayusculas funciona igual pero el numero cambia a 155.
Por lo tanto tendremos que hacer:	155 - caracyer_actual.
*/
void	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 219 - argv[1][i];
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] - 155 - argv[1][i];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
