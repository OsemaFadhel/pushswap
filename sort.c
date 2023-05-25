/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:37:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/25 19:11:14 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	ft_count_moves(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = ft_lstsize(*stack_a);
	while (i < size - 3)
	{
		// Calculate how many operations is needed for each number
		// then apply the move;
	}
	return (i);
}

void	ft_sort_a(t_list **stack_a, t_list **stack_b)
{
	//same thing but reversed
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
	ft_sort_three(stack_a);
	ft_sort_a(stack_a, stack_b);
	ft_sort(stack_a, stack_b);
}*/

void	ft_sort_b(t_list **stack_a, t_list **stack_b)
{
	int			i;
	int			j;
	int			size;
	t_number	min;
	t_number	max;

	i = 0;
	j = 0;
	get_min(stack_b, &min);
	get_max(stack_b, &max);
	size = ft_lstsize(*stack_a);
	while (i < size - 3)
	{
		get_min_max(stack_b, &min, &max);
		ft_count_moves(stack_a, stack_b);
	}
	ft_sort_three(stack_a);
	ft_sort_a(stack_a, stack_b);
	ft_sort(stack_a, stack_b);
}
