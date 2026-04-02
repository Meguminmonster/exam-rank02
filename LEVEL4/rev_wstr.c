/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 20:26:23 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/02 20:32:32 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	start;
	int	end;
	int	temp;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		end = i;
		while (i >= 0 && str[i] != ' ' && str[i] != '\t')
			i--;
		start = i + 1;
		temp = start;
		while (temp <= end)
		{
			write(1, &str[temp], 1);
			temp++;
		}
		if (i > 0)
			write(1, " ", 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
