/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:14:06 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/24 13:48:19 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	put_number(int numbers)
{
	char	dos;

	if (numbers >= 10)
	{
		dos = (numbers / 10) + '0';
		write(1, &dos, 1);
		dos = (numbers % 10) + '0';
		write(1, &dos, 1);
	}
}

void	main(void)
{
	char	c;
	int		numbers;

	numbers = 1;
	while (numbers <= 100)
	{
		if ((numbers % 3 == 0) && (numbers % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (numbers % 3 == 0)
			write(1, "fizz", 4);
		else if (numbers % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			if (numbers <= 9)
			{
				c = (numbers + '0');
				write(1, &c, 1);
			}
			else if (numbers >= 10)
				put_number(numbers);
		}
		numbers++;
		write(1, "\n", 1);
	}
}
