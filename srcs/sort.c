/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:37:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/21 19:08:49 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_ab(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = stack_a;
	i = rrarrb(stack_a, stack_b, stack_a->content, 'b');
	while (tmp)
	{
		if (i > rarb(stack_a, stack_b, tmp->content, 'b'))
			i = rarb(stack_a, stack_b, tmp->content, 'b');
		if (i > rarrb(stack_a, stack_b, tmp->content, 'b'))
			i = rarrb(stack_a, stack_b, tmp->content, 'b');
		if (i > rrarb(stack_a, stack_b, tmp->content, 'b'))
			i = rrarb(stack_a, stack_b, tmp->content, 'b');
		tmp = tmp->next;
	}
	return (i);
}

int	count_ba(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = stack_b;
	i = rrarrb(stack_a, stack_b, stack_b->content, 'a');
	while (tmp)
	{
		if (i > rarb(stack_a, stack_b, tmp->content, 'a'))
			i = rarb(stack_a, stack_b, tmp->content, 'a');
		if (i > rarrb(stack_a, stack_b, tmp->content, 'a'))
			i = rarrb(stack_a, stack_b, tmp->content, 'a');
		if (i > rrarb(stack_a, stack_b, tmp->content, 'a'))
			i = rrarb(stack_a, stack_b, tmp->content, 'a');
		tmp = tmp->next;
	}
	return (i);
}

void	ft_sort_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = count_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == rarb(*stack_a, *stack_b, tmp->content, 'a'))
				i = apply_rarb(stack_a, stack_b, tmp->content, 'a');
			else if (i == rarrb(*stack_a, *stack_b, tmp->content, 'a'))
				i = apply_rarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == rrarrb(*stack_a, *stack_b, tmp->content, 'a'))
				i = apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == rrarb(*stack_a, *stack_b, tmp->content, 'a'))
				i = apply_rrarb(stack_a, stack_b, tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort_b(t_list **stack_a, t_list **stack_b)
{
	int			i;
	t_list		*tmp;

	i = 0;
	while (ft_lstsize(*stack_a) > 3 && !check_sorted(stack_a))
	{
		tmp = *stack_a;
		i = count_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == rarb(*stack_a, *stack_b, tmp->content, 'b'))
				i = apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == rrarrb(*stack_a, *stack_b, tmp->content, 'b'))
				i = apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == rarrb(*stack_a, *stack_b, tmp->content, 'b'))
				i = apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == rrarb(*stack_a, *stack_b, tmp->content, 'b'))
				i = apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
}
