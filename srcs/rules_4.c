/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:13:16 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/21 19:18:02 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push_c(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	return (1);
}

int	push_a(t_list **stack_a, t_list **stack_b)
{
	push_c(stack_a, stack_b);
	ft_printf("pa\n");
	return (1);
}

int	push_b(t_list **stack_a, t_list **stack_b)
{
	push_c(stack_b, stack_a);
	ft_printf("pb\n");
	return (1);
}
