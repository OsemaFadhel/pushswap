/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:25:12 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/11 04:11:06 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->content);
		lst = lst->next;
	}
	return (0);
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

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
	{
		ft_printf("Error: Not enough arguments!\n");
		return (0);
	}
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 2)
	{
		ft_add_nb2(&stack_a, av);
	}
	if (ac > 2)
	{
		ft_add_nb(&stack_a, av);
	}
	ft_lstprint(stack_a);
	sort_three(&stack_a);
	ft_lstprint(stack_a);
	return (0);
}
