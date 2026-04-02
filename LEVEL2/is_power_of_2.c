/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:00:10 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/26 14:07:53 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	power;

	power = 1;
	while (power <= n)
	{
		if (power == n)
			return (1);
		if (power > n / 2)
			break ;
		power *= 2;
	}
	return (0);
}
