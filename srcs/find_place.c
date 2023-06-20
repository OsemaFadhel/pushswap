/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:19:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/20 22:06:13 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	search_index(t_list *stack, int nbr)
{
	t_list	*tmp;
	int		i;

	tmp = stack;
	i = 0;
	while (tmp->content != nbr)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	search_b2(t_list *stack_b, int c, char s, int i)
{
	t_list	*tmp;

	if (s == 'b')
	{
		tmp = stack_b->next;
		while (stack_b->content < c || tmp->content > c)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	else if (s == 'a')
	{
		tmp = stack_b->next;
		while (stack_b->content > c || tmp->content < c)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	search_b(t_list *stack_a, t_list *stack_b, int c, char s)
{
	int		i;

	(void)stack_a;
	i = 1;
	if ((s == 'b' && c > stack_b->content && c < ft_lstlast(stack_b)->content)
		|| (s == 'a' && c < stack_b->content
			&& c > ft_lstlast(stack_b)->content))
		i = 0;
	else if (s == 'b' && (c > get_max(stack_b) || c < get_min(stack_b)))
		i = search_index(stack_b, get_max(stack_b));
	else if (s == 'a' && (c > get_max(stack_b) || c < get_min(stack_b)))
		i = search_index(stack_b, get_min(stack_b));
	else
		i = search_b2(stack_b, c, s, i);
	return (i);
}
