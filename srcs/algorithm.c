/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:26:23 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/23 21:43:33 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstfirst(t_list *lst)
{
	if (!lst)
		return (NULL);
	return (lst);
}

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
	push_b(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(stack_a))
		push_b(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 3 && !check_sorted(stack_a))
		ft_sort_b(stack_a, stack_b);
	if (ft_lstsize(*stack_a) == 3 && !check_sorted(stack_a))
		sort_three(stack_a);
	ft_sort_a(stack_a, stack_b);
	while (ft_lstlast(*stack_a)->content < ft_lstfirst(*stack_a)->content)
		reverse_rot_a(stack_a);
}

void	algorithm(t_list **stack_a, t_list **stack_b, int size)
{
	if (check_sorted(stack_a) == 1)
		ft_printf("Already sorted!\n");
	else if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else
		ft_turk(stack_a, stack_b);
}
