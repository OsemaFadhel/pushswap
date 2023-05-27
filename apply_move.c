/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:19:13 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/27 21:42:31 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_rarb(t_list **a, t_list **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c && search_b(*b, c) > 0)
			rot_ab(a, b);
		while ((*a)->content != c)
			rot_a(a);
		while (search_b(*b, c) > 0)
			rot_b(b);
		push_b(a, b);
	}
	else
	{
		while ((*b)->content != c && search_a(*a, c) > 0)
			rot_ab(a, b);
		while ((*b)->content != c)
			rot_b(b);
		while (search_a(*a, c) > 0)
			rot_a(a);
		push_a(a, b);
	}
	return (-1);
}

// This function rotate both list_a and list_b in the
// reverse direction as required amount.
int	apply_rrarrb(t_list **a, t_list **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c && search_b(*b, c) > 0)
			reverse_rot_ab(a, b);
		while ((*a)->content != c)
			reverse_rot_a(a);
		while (search_b(*b, c) > 0)
			reverse_rot_b(b);
		push_b(a, b);
	}
	else
	{
		while ((*b)->content != c && search_a(*a, c) > 0)
			reverse_rot_ab(a, b);
		while ((*b)->content != c)
			reverse_rot_b(b);
		while (search_a(*a, c) > 0)
			reverse_rot_a(a);
		push_a(a, b);
	}
	return (-1);
}

// This function rotate the list_a in reverse direction,
// the list_b in oppsite direction of list_a as required amount.
int	apply_rrarb(t_list **a, t_list **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c)
			reverse_rot_a(a);
		while (search_b(*b, c) > 0)
			rot_b(b);
		push_b(a, b);
	}
	else
	{
		while (search_a(*a, c) > 0)
			reverse_rot_a(a);
		while ((*b)->content != c)
			rot_b(b);
		push_a(a, b);
	}
	return (-1);
}

// This function rotate the list_b in reverse direction,
// the list_a in oppsite direction of list_a as required amount.
int	apply_rarrb(t_list **a, t_list **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c)
			rot_a(a);
		while (search_b(*b, c) > 0)
			reverse_rot_b(b);
		push_b(a, b);
	}
	else
	{
		while (search_a(*a, c) > 0)
			rot_a(a);
		while ((*b)->content != c)
			reverse_rot_b(b);
		push_a(a, b);
	}
	return (-1);
}