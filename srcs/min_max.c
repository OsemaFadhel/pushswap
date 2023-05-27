/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:11:37 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/27 21:44:13 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(t_list *stack)
{
	t_list	*tmp;
	int		max;

	tmp = stack;
	max = tmp->content;
	while (tmp)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

int	get_min(t_list *stack)
{
	t_list	*tmp;
	int		min;

	tmp = stack;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}
