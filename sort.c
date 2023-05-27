/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:37:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/27 22:22:00 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = search_a(a, c);
	if (i < search_index(b, c))
		i = search_index(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (search_a(a, c))
		i = ft_lstsize(a) - search_a(a, c);
	if ((i < (ft_lstsize(b) - search_index(b, c))) && search_index(b, c))
		i = ft_lstsize(b) - search_index(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (search_index(b, c))
		i = ft_lstsize(b) - search_index(b, c);
	i = search_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_list *a, t_list *b, int c)
{
	int	i;

	i = 0;
	if (search_a(a, c))
		i = ft_lstsize(a) - search_a(a, c);
	i = search_index(b, c) + i;
	return (i);
}

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
	i = ft_case_rrarrb_a(a, b, b->content);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->content))
			i = ft_case_rarb_a(a, b, tmp->content);
		if (i > ft_case_rrarrb_a(a, b, tmp->content))
			i = ft_case_rrarrb_a(a, b, tmp->content);
		if (i > ft_case_rarrb_a(a, b, tmp->content))
			i = ft_case_rarrb_a(a, b, tmp->content);
		if (i > ft_case_rrarb_a(a, b, tmp->content))
			i = ft_case_rrarb_a(a, b, tmp->content);
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
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->content))
				i = apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->content))
				i = apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->content))
				i = apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->content))
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
	ft_lstprint(*stack_b);
}
