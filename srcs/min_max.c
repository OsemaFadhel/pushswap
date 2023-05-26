/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:11:37 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/26 22:54:32 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_list **stack_a, int *max)
{
	t_list	*tmp;

	tmp = *stack_a;
	*max = tmp->content;
	while (tmp)
	{
		if (tmp->content > *max)
			*max = tmp->content;
		tmp = tmp->next;
	}
	return (*max);
}

int	get_min(t_list **stack_b, int *min)
{
	t_list	*tmp;

	tmp = *stack_b;
	*min = tmp->content;
	while (tmp)
	{
		if (tmp->content < *min)
			*min = tmp->content;
		tmp = tmp->next;
	}
	return (*min);
}
