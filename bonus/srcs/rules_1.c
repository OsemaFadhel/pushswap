/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:49:13 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/23 23:24:30 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	swap_c(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	return (1);
}

int	swap_a(t_list **stack_a)
{
	swap_c(stack_a);
	ft_printf("sa\n");
	return (1);
}

int	swap_b(t_list **stack_b)
{
	swap_c(stack_b);
	ft_printf("sb\n");
	return (1);
}

int	swap_ab(t_list **stack_a, t_list **stack_b)
{
	swap_c(stack_a);
	swap_c(stack_b);
	ft_printf("ss\n");
	return (2);
}
