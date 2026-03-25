/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:32:45 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/03/25 16:47:24 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		start;
	int		finish;

	finish = 0;
	while (str[finish] != '\0')
		finish++;
	finish--;
	start = 0;
	while (start < finish)
	{
		tmp = str[start];
		str[start] = str[finish];
		str[finish] = tmp;
		start++;
		finish--;
	}
	return (str);
}
