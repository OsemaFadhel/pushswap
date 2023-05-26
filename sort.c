/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:37:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/26 23:22:14 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_a(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = ft_lstsize(*stack_b);
	while (i < size)
	{
		ft_count_moves(stack_a, stack_b);
	}
}

void	ft_sort_b(t_list **stack_a, t_list **stack_b)
{
	int			i;
	int			j;
	int			size;
	t_list		*tmp;

	i = 0;
	j = ft_rotate_type_ab(stack_a, stack_b);
	tmp = *stack_a;
	size = ft_lstsize(*stack_a);
	while (i < size - 3 && !check_sorted(stack_a))
	{
		if (j == ft_case_rarb(*stack_a, *stack_b, tmp->nbr))
			j = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'a');
		else if (j == ft_case_rrarrb(*stack_a, *stack_b, tmp->nbr))
			j = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
		else if (j == ft_case_rarrb(*stack_a, *stack_b, tmp->nbr))
			j = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'a');
		else if (j == ft_case_rrarb(*stack_a, *stack_b, tmp->nbr))
			j = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'a');
		else
			tmp = tmp->next;
		i++;
	}
}
