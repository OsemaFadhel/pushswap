/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:00:41 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/26 23:22:17 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ab(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->nbr))
			i = ft_case_rarb(a, b, tmp->nbr);
		if (i > ft_case_rrarrb(a, b, tmp->nbr))
			i = ft_case_rrarrb(a, b, tmp->nbr);
		if (i > ft_case_rarrb(a, b, tmp->nbr))
			i = ft_case_rarrb(a, b, tmp->nbr);
		if (i > ft_case_rrarb(a, b, tmp->nbr))
			i = ft_case_rrarb(a, b, tmp->nbr);
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
