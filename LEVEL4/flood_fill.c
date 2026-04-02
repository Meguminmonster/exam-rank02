/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 18:41:51 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/02 19:00:42 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
1. Verificar si estamos fuera de los límites del mapa
2. Verificar si el carácter actual es el que queremos cambiar
3. Pintar el carácter actual con 'F'
4. Llamar recursivamente a los 4 vecinos (No diagonales)
Arriba, Abajo, Izquierda, Derecha
*/
#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point cur, char target)
{
	t_point	p;

	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x)
		return ;
	if (tab[cur.y][cur.x] != target)
		return ;
	tab[cur.y][cur.x] = 'F';
	p.x = cur.x;
	p.y = cur.y - 1;
	fill(tab, size, p, target);
	p.x = cur.x;
	p.y = cur.y + 1;
	fill(tab, size, p, target);
	p.x = cur.x - 1;
	p.y = cur.y;
	fill(tab, size, p, target);
	p.x = cur.x + 1;
	p.y = cur.y;
	fill(tab, size, p, target);
}
