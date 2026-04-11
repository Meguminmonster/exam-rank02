/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedra-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 15:26:33 by jpedra-v          #+#    #+#             */
/*   Updated: 2026/04/11 15:31:19 by jpedra-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}			t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

#endif
