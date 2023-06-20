/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BETAcount_move_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:50:34 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/13 17:47:55 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rarb_a(t_list *a, t_list *b, int c)
{
	i = search_a(a, c);
	if (i < search_index(b, c))
		i = search_index(b, c);
	return (i);
}

int	rrarrb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (search_a(a, c))
		i = ft_lstsize(a) - search_a(a, c);
	if ((i < (ft_lstsize(b) - search_index(b, c))) && search_index(b, c))
		i = ft_lstsize(b) - search_index(b, c);
	return (i);
}

int	rarrb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (search_index(b, c))
		i = ft_lstsize(b) - search_index(b, c);
	i = search_a(a, c) + i;
	return (i);
}

int	rrarb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (search_a(a, c))
		i = ft_lstsize(a) - search_a(a, c);
	i = search_index(b, c) + i;
	return (i);
}
