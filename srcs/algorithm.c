/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:26:23 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/26 23:23:17 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_list **stack_a)
{
	int	a;
	int	b;

	a = (*stack_a)->content;
	b = (*stack_a)->next->content;
	if (a > b)
		swap_a(stack_a);
}

void	sort_three(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->content;
	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	if (a > b && b < c && a < c)
		swap_a(stack_a);
	else if (a > b && b > c && a > c)
	{
		swap_a(stack_a);
		reverse_rot_a(stack_a);
	}
	else if (a > b && b < c && a > c)
		rot_a(stack_a);
	else if (a < b && b > c && a < c)
	{
		swap_a(stack_a);
		rot_a(stack_a);
	}
	else if (a < b && b > c && a > c)
		reverse_rot_a(stack_a);
}

void	ft_turk(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	push_b(stack_a, stack_b);
	push_b(stack_a, stack_b);
	ft_sort_b(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_sort_a(stack_a, stack_b);
}

void	algorithm(t_list **stack_a, t_list **stack_b, int size)
{
	(void) stack_b;
	if (check_sorted(stack_a) == 1)
	{
		ft_printf("Already sorted!\n");
	}
	else if (size == 2)
	{
		sort_two(stack_a);
	}
	else if (size == 3)
	{
		sort_three(stack_a);
	}
	else
	{
		ft_turk(stack_a, stack_b);
	}
}
