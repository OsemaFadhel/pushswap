/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:00:41 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/27 19:34:37 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_type_ab(t_list *a, t_list *b)
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

/*void	apply_operation(char *operation, t_list **stack_a, t_list **stack_b)
{
	if (strcmp(operation, "sa") == 0)
		swap_a(*stack_a);
	else if (strcmp(operation, "sb") == 0)
		swap_b(stack_b);
	else if (strcmp(operation, "ss") == 0)
		swap_ab(stack_a, stack_b);
	else if (strcmp(operation, "pa") == 0)
		push_a(stack_a, stack_b);
	else if (strcmp(operation, "pb") == 0)
		push_b(stack_a, stack_b);
	else if (strcmp(operation, "ra") == 0)
		rotate_(*stack_a);
	else if (strcmp(operation, "rb") == 0)
		rot_b(stack_b);
	else if (strcmp(operation, "rr") == 0)
		rot_ab(stack_a, stack_b);
	else if (strcmp(operation, "rra") == 0)
		reverse_rot_a(stack_a);
	else if (strcmp(operation, "rrb") == 0)
		reverse_rot_ab(stack_a, stack_b);
	else if (strcmp(operation, "rrr") == 0)
		reverse_rot_ab(stack_a, stack_b);
}*/