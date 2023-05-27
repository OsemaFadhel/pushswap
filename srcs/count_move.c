/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:00:41 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/27 21:50:54 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rarb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = search_b(stack_b, c);
	if (i < search_index(stack_a, c))
		i = search_index(stack_a, c);
	return (i);
}

int	rrarrb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (search_b(stack_b, c))
		i = ft_lstsize(stack_b) - search_b(stack_b, c);
	if ((i < (ft_lstsize(stack_a) - search_index(stack_a, c)))
		&& search_index(stack_a, c))
		i = ft_lstsize(stack_a) - search_index(stack_a, c);
	return (i);
}

int	rrarb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (search_index(stack_a, c))
		i = ft_lstsize(stack_a) - search_index(stack_a, c);
	i = search_b(stack_b, c) + i;
	return (i);
}

int	rarrb(t_list *stack_a, t_list *stack_b, int c)
{
	int	i;

	i = 0;
	if (search_b(stack_b, c))
		i = ft_lstsize(stack_b) - search_b(stack_b, c);
	i = search_index(stack_a, c) + i;
	return (i);
}
