/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:49:13 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/23 23:22:52 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap_a(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	ft_printf("sa\n");
	return (1);
}

int	swap_b(t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b && (*stack_b)->next)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = tmp->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	ft_printf("sb\n");
	return (1);
}

int	swap_ab(t_list **stack_a, t_list **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	ft_printf("ss\n");
	return (2);
}

int	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	ft_printf("pa\n");
	return (1);
}

int	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	ft_printf("pb\n");
	return (1);
}