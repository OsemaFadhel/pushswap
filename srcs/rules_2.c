/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:54:01 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/23 23:26:53 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rot_a(t_list **stack_a)
{
	t_list	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	tmp = *stack_a;
	*stack_a = ft_lstlast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = (*stack_a)->next->next;
	tmp->next = NULL;
	ft_printf("ra\n");
	return (1);
}

int	rot_b(t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return (0);
	tmp = *stack_b;
	*stack_b = ft_lstlast(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = (*stack_b)->next->next;
	tmp->next = NULL;
	ft_printf("rb\n");
	return (1);
}

int	rot_ab(t_list **stack_a, t_list **stack_b)
{
	rot_a(stack_a);
	rot_b(stack_b);
	ft_printf("rr\n");
	return (2);
}
