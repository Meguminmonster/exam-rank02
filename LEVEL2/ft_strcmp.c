/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:51:40 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/24 18:04:08 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strcmp NO compara la longitud de ambos strings, 
compara EN ASCII el primer caracter que no sea igual en ambos strings.
Es decir, en [s1: holass ] [s2: holiss ] compara la "a" y la "i",
que en ASCII son 97(a) y 105(i), y por lo tanto daria un resultado negativo.
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
