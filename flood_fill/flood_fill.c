/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 13:28:17 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/11 13:44:39 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point cur, char target)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x)
		return ;
	if (tab[cur.y][cur.x] != target)
		return ;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x, cur.y - 1}, target);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, target);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, target);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;

	target = tab[begin.y][begin.x];
	fill(tab, size, begin, target);
}
