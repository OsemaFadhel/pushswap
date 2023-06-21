/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:00:41 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/21 19:08:45 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rarb(t_list *stack_a, t_list *stack_b, int c, char s)
{
	int	i;

	i = 0;
	if (s == 'b')
	{
		i = search_b(stack_a, stack_b, c, 'b');
		if (i < search_index(stack_a, c))
			i = search_index(stack_a, c);
	}
	else if (s == 'a')
	{
		i = search_b(stack_b, stack_a, c, 'a');
		if (i < search_index(stack_b, c))
			i = search_index(stack_b, c);
	}
	return (i);
}

int	rrarrb(t_list *stack_a, t_list *stack_b, int c, char s)
{
	int	i;

	i = 0;
	if (s == 'b')
	{
		if (search_b(stack_a, stack_b, c, 'b'))
			i = ft_lstsize(stack_b) - search_b(stack_a, stack_b, c, 'b');
		if ((i < (ft_lstsize(stack_a) - search_index(stack_a, c)))
			&& search_index(stack_a, c))
			i = ft_lstsize(stack_a) - search_index(stack_a, c);
	}
	else if (s == 'a')
	{
		if (search_b(stack_b, stack_a, c, 'a'))
			i = ft_lstsize(stack_a) - search_b(stack_b, stack_a, c, 'a');
		if ((i < (ft_lstsize(stack_b) - search_index(stack_b, c)))
			&& search_index(stack_b, c))
			i = ft_lstsize(stack_b) - search_index(stack_b, c);
	}
	return (i);
}

int	rrarb(t_list *stack_a, t_list *stack_b, int c, char s)
{
	int	i;

	i = 0;
	if (s == 'b')
	{
		if (search_index(stack_a, c))
			i = ft_lstsize(stack_a) - search_index(stack_a, c);
		i += search_b(stack_a, stack_b, c, 'b');
	}
	else if (s == 'a')
	{
		if (search_b(stack_b, stack_a, c, 'a'))
			i = ft_lstsize(stack_a) - search_b(stack_b, stack_a, c, 'a');
		i += search_index(stack_b, c);
	}
	return (i);
}

int	rarrb(t_list *stack_a, t_list *stack_b, int c, char s)
{
	int	i;

	i = 0;
	if (s == 'b')
	{
		if (search_b(stack_a, stack_b, c, 'b'))
			i = ft_lstsize(stack_b) - search_b(stack_a, stack_b, c, 'b');
		i = search_index(stack_a, c) + i;
	}
	else if (s == 'a')
	{
		if (search_index(stack_b, c))
			i = ft_lstsize(stack_b) - search_index(stack_b, c);
		i += search_b(stack_b, stack_a, c, 'a');
	}
	return (i);
}
