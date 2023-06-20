/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:19:13 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/20 22:11:29 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_rarb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'b')
	{
		while ((*stack_a)->content != c
			&& search_b(*stack_a, *stack_b, c, s) > 0)
			rot_ab(stack_a, stack_b);
		while ((*stack_a)->content != c)
			rot_a(stack_a);
		while (search_b(*stack_a, *stack_b, c, s) > 0)
			rot_b(stack_b);
		push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->content != c
			&& search_b(*stack_b, *stack_a, c, s) > 0)
			rot_ab(stack_a, stack_b);
		while ((*stack_b)->content != c)
			rot_b(stack_b);
		while (search_b(*stack_b, *stack_a, c, s) > 0)
			rot_a(stack_a);
		push_a(stack_a, stack_b);
	}
	return (-1);
}

int	apply_rrarrb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'b')
	{
		while ((*stack_a)->content != c
			&& search_b(*stack_a, *stack_b, c, s) > 0)
			reverse_rot_ab(stack_a, stack_b);
		while ((*stack_a)->content != c)
			reverse_rot_a(stack_a);
		while (search_b(*stack_a, *stack_b, c, s) > 0)
			reverse_rot_b(stack_b);
		push_b(stack_a, stack_b);
	}
	else
	{
		while ((*stack_b)->content != c
			&& search_b(*stack_b, *stack_a, c, s) > 0)
			reverse_rot_ab(stack_a, stack_b);
		while ((*stack_b)->content != c)
			reverse_rot_b(stack_b);
		while (search_b(*stack_b, *stack_a, c, s) > 0)
			reverse_rot_a(stack_a);
		push_a(stack_a, stack_b);
	}
	return (-1);
}

int	apply_rrarb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'b')
	{
		while ((*stack_a)->content != c)
			reverse_rot_a(stack_a);
		while (search_b(*stack_a, *stack_b, c, s) > 0)
			rot_b(stack_b);
		push_b(stack_a, stack_b);
	}
	else
	{
		while (search_b(*stack_b, *stack_a, c, s) > 0)
			reverse_rot_a(stack_a);
		while ((*stack_b)->content != c)
			rot_b(stack_b);
		push_a(stack_a, stack_b);
	}
	return (-1);
}

int	apply_rarrb(t_list **stack_a, t_list **stack_b, int c, char s)
{
	if (s == 'b')
	{
		while ((*stack_a)->content != c)
			rot_a(stack_a);
		while (search_b(*stack_a, *stack_b, c, s) > 0)
			reverse_rot_b(stack_b);
		push_b(stack_a, stack_b);
	}
	else
	{
		while (search_b(*stack_b, *stack_a, c, s) > 0)
			rot_a(stack_a);
		while ((*stack_b)->content != c)
			reverse_rot_b(stack_b);
		push_a(stack_a, stack_b);
	}
	return (-1);
}
