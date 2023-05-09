/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:54:52 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/10 00:49:11 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rot_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*second_last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	second_last = *stack_a;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

void	reverse_rot_b(t_list **stack_b)
{
	t_list	*last;
	t_list	*second_last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	second_last = *stack_b;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

void	reverse_rot_ab(t_list **stack_a, t_list **stack_b)
{
	reverse_rot_a(stack_a);
	reverse_rot_b(stack_b);
}
