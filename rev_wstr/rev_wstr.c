/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:53:16 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/11 17:02:36 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_wstr(char *s)
{
	int	i;
	int	start;
	int	end;
	int	j;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		while (i >= 0 && (s[i] == '\0' || s[i] == ' ' || s[i] == '\t'))
			i--;
		end = i;
		while (i >= 0 && s[i] != ' ' && s[i] != '\t')
			i--;
		start = i + 1;
		j = start;
		while (j <= end)
		{
			write(1, &s[j], 1);
			j++;
		}
		if (i > 0)
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
