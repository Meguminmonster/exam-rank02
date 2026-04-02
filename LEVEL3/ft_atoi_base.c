/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:34:52 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/01 20:41:56 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_digit(char c, int digits_in_base)
{
	int	res;

	if (c >= '0' && c <= '9')
		res = c - '0';
	else if (c >= 'a' && c <= 'z')
		res = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		res = c - 'A' + 10;
	else
		return (-1);
	if (res < digits_in_base)
		return (res);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	digit;

	res = 0;
	sign = 1;
	if (str_base < 2 || str_base > 16)
		return (0);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	digit = get_digit(*str, str_base);
	while (digit >= 0)
	{
		res = res * str_base + digit;
		str++;
		digit = get_digit(*str, str_base);
	}
	return (res * sign);
}
