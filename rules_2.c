/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:54:01 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/10 00:38:56 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rot_a(t_list **stack_a)
{
	t_list	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = ft_lstlast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = (*stack_a)->next->next;
	tmp->next = NULL;
}

void	rot_b(t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = ft_lstlast(*stack_b);
	(*stack_b)->next = tmp;
	*stack_b = (*stack_b)->next->next;
	tmp->next = NULL;
}

void	rot_ab(t_list **stack_a, t_list **stack_b)
{
	rot_a(stack_a);
	rot_b(stack_b);
}
