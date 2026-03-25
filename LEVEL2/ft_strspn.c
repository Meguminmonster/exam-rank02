/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:48:21 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/25 17:02:29 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	b;
	int		encontrado;

	i = 0;
	while (s[i] != '\0')
	{
		encontrado = 0;
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[i] == accept[b])
			{
				encontrado = 1;
				break ;
			}
			b++;
		}
		if (encontrado == 0)
			return (i);
		i++;
	}
	return (i);
}
