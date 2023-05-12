/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:26:23 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/12 20:03:36 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm(t_list **stack_a, t_list **stack_b, int size)
{
	int	a;
	int	b;

	(void) stack_b;
	if (size == 2)
	{
		a = (*stack_a)->content;
		b = (*stack_a)->next->content;
		if (a > b)
		{
			rot_a(stack_a);
		}
	}
	else if (size == 3)
	{
		sort_three(stack_a);
		return ;
	}
	else
	{
		ft_printf("working on it\n");
	}
}
