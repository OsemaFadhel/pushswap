/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:03:05 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/11 00:55:31 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
