/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:37:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/27 19:35:21 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ft_sort_a(t_list **stack_a, t_list **stack_b)
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
}*/

void	ft_sort_b(t_list **stack_a, t_list **stack_b)
{
	int			i;
	int			j;
	int			size;
	t_list		*tmp;

	i = 0;
	j = rotate_type_ab(*stack_a, *stack_b);
	tmp = *stack_a;
	size = ft_lstsize(*stack_a);
	while (i < size - 3 && !check_sorted(stack_a))
	{
		if (j == rarb(*stack_a, *stack_b, tmp->content))
			j = apply_rarb(stack_a, stack_b, tmp->content, 'a');
		else if (j == rrarrb(*stack_a, *stack_b, tmp->content))
			j = apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
		else if (j == rarrb(*stack_a, *stack_b, tmp->content))
			j = apply_rarrb(stack_a, stack_b, tmp->content, 'a');
		else if (j == rrarb(*stack_a, *stack_b, tmp->content))
			j = apply_rrarb(stack_a, stack_b, tmp->content, 'a');
		else
			tmp = tmp->next;
		i++;
	}
}
