/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:54:52 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/23 23:27:12 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_rot_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*second_last;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	second_last = *stack_a;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	ft_printf("rra\n");
	return (1);
}

int	reverse_rot_b(t_list **stack_b)
{
	t_list	*last;
	t_list	*second_last;

	if (!*stack_b || !(*stack_b)->next)
		return (0);
	second_last = *stack_b;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	ft_printf("rrb\n");
	return (1);
}

int	reverse_rot_ab(t_list **stack_a, t_list **stack_b)
{
	reverse_rot_a(stack_a);
	reverse_rot_b(stack_b);
	ft_printf("rrr\n");
	return (2);
}
