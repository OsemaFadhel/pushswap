/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:37:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/09 20:07:07 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_ab(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = a;
	i = rrarrb(a, b, a->content);
	while (tmp)
	{
		if (i > rarb(a, b, tmp->content))
			i = rarb(a, b, tmp->content);
		if (i > rrarrb(a, b, tmp->content))
			i = rrarrb(a, b, tmp->content);
		if (i > rarrb(a, b, tmp->content))
			i = rarrb(a, b, tmp->content);
		if (i > rrarb(a, b, tmp->content))
			i = rrarb(a, b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ba(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = b;
	i = rrarrb(b, a, b->content);
	while (tmp)
	{
		if (i > rarb(b, a, tmp->content))
			i = rarb(b, a, tmp->content);
		if (i > rrarrb(b, a, tmp->content))
			i = rrarrb(b, a, tmp->content);
		if (i > rarrb(b, a, tmp->content))
			i = rarrb(b, a, tmp->content);
		if (i > rrarb(b, a, tmp->content))
			i = rrarb(b, a, tmp->content);
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
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == rarb(*stack_b, *stack_a, tmp->content))
				i = apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == rarrb(*stack_b, *stack_a, tmp->content))
				i = apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == rrarrb(*stack_b, *stack_a, tmp->content))
				i = apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == rrarb(*stack_b, *stack_a, tmp->content))
				i = apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort_b(t_list **stack_a, t_list **stack_b)
{
	int			i;
	int			j;
	t_list		*tmp;

	i = 0;
	while (ft_lstsize(*stack_a) > 3 && !check_sorted(stack_a))
	{
		tmp = *stack_a;
		j = count_ab(*stack_a, *stack_b);
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
	ft_printf("staCkB\n");
	ft_lstprint(*stack_b);
}
