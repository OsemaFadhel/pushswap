/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:54:01 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/23 23:23:42 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	rot_c(t_list **stack_a)
{
	t_list	*tmp;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	tmp = *stack_a;
	*stack_a = ft_lstlast(*stack_a);
	(*stack_a)->next = tmp;
	*stack_a = (*stack_a)->next->next;
	tmp->next = NULL;
	return (1);
}

int	rot_a(t_list **stack_a)
{
	rot_c(stack_a);
	ft_printf("ra\n");
	return (1);
}

int	rot_b(t_list **stack_b)
{
	rot_c(stack_b);
	ft_printf("rb\n");
	return (1);
}

int	rot_ab(t_list **stack_a, t_list **stack_b)
{
	rot_c(stack_a);
	rot_c(stack_b);
	ft_printf("rr\n");
	return (2);
}
