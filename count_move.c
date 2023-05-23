/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:00:41 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/23 20:15:51 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_elements(int *stack, int size)
{
	int	temp;

	if (size > 1)
	{
		temp = stack[0];
		stack[0] = stack[1];
		stack[1] = temp;
	}
}

void	push_a(int **stack_a, int **stack_b, int *size_a, int *size_b)
{
	int	*new_stack_a;
	int	*new_stack_b;

	if (*size_b > 0)
	{
		new_stack_a = (int *)malloc((*size_a + 1) * sizeof(int));
		memcpy(new_stack_a + 1, *stack_a, *size_a * sizeof(int));
		new_stack_a[0] = (*stack_b)[0];
		free(*stack_a);
		free(*stack_b);
		*stack_a = new_stack_a;
		(*size_a)++;
		new_stack_b = (int *)malloc((*size_b - 1) * sizeof(int));
		memcpy(new_stack_b, (*stack_b) + 1, (*size_b - 1) * sizeof(int));
		(*stack_b) = new_stack_b;
		(*size_b)--;
	}
}

void	rotate_stack(int *stack, int size)
{
	int	temp;

	if (size > 1)
	{
		temp = stack[0];
		memcpy(stack, stack + 1, (size - 1) * sizeof(int));
		stack[size - 1] = temp;
	}
}

void	reverse_rotate_stack(int *stack, int size)
{
	int	temp;

	if (size > 1)
	{
		temp = stack[size - 1];
		memcpy(stack + 1, stack, (size - 1) * sizeof(int));
		stack[0] = temp;
	}
}

void	apply_operation(char *operation, int **stack_a, int **stack_b)
{
	if (strcmp(operation, "sa") == 0)
		swap_a(*stack_a);
	else if (strcmp(operation, "sb") == 0)
		swap_b(stack_b);
	else if (strcmp(operation, "ss") == 0)
		swap_ab(stack_a, stack_b);
	else if (strcmp(operation, "pa") == 0)
		push_a(stack_a, stack_b, size_a, size_b);
	else if (strcmp(operation, "pb") == 0)
		push_a(stack_b, stack_a, size_b, size_a);
	else if (strcmp(operation, "ra") == 0)
		rotate_(*stack_a);
	else if (strcmp(operation, "rb") == 0)
		rotate_stack(*stack_b);
	else if (strcmp(operation, "rr") == 0)
		rot_ab(stack_a, stack_b);
	else if (strcmp(operation, "rra") == 0)
		reverse_rot_a(*stack_a);
	else if (strcmp(operation, "rrb") == 0)
		reverse_rot_ab(*stack_b);
	else if (strcmp(operation, "rrr") == 0)
		reverse_rot_ab(stack_a, stack_b);
}
