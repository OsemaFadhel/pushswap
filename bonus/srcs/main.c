/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:45:57 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/24 19:45:10 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"
#include "../gnl/get_next_line.h"

void	free_stack(t_list *stack_a)
{
	t_list	*tmp;

	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
}

int	apply_op(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strncmp(line, "sa", 2))
		swap_a(stack_a);
	else if (!ft_strncmp(line, "sb", 2))
		swap_b(stack_b);
	else if (!ft_strncmp(line, "ss", 2))
		swap_ab(stack_a, stack_b);
	else if (!ft_strncmp(line, "pa", 2))
		push_a(stack_a, stack_b);
	else if (!ft_strncmp(line, "pb", 2))
		push_b(stack_a, stack_b);
	else if (!ft_strncmp(line, "ra", 2))
		rot_a(stack_a);
	else if (!ft_strncmp(line, "rb", 2))
		rot_b(stack_b);
	else if (!ft_strncmp(line, "rr", 2))
		rot_ab(stack_a, stack_b);
	else if (!ft_strncmp(line, "rra", 3))
		reverse_rot_a(stack_a);
	else if (!ft_strncmp(line, "rrb", 3))
		reverse_rot_b(stack_b);
	else if (!ft_strncmp(line, "rrr", 3))
		reverse_rot_ab(stack_a, stack_b);
	else
		return (0);
	return (1);
}

int	check_line(char *line)
{
	if (!ft_strncmp(line, "sa", 2) || !ft_strncmp(line, "sb", 2)
		|| !ft_strncmp(line, "ss", 2) || !ft_strncmp(line, "pa", 2)
		|| !ft_strncmp(line, "pb", 2) || !ft_strncmp(line, "ra", 2)
		|| !ft_strncmp(line, "rb", 2) || !ft_strncmp(line, "rr", 2)
		|| !ft_strncmp(line, "rra", 3) || !ft_strncmp(line, "rrb", 3)
		|| !ft_strncmp(line, "rrr", 3))
		return (1);
	return (0);
}

void	get_move(t_list *stack_a, t_list *stack_b)
{
	char	*line;

	while (get_next_line(0))
	{
		line = get_next_line(0);
		if (!check_line(line))
		{
			free(line);
			free_stack(stack_a);
			free_stack(stack_b);
			error(6);
		}
		apply_op(line, &stack_a, &stack_b);
		free(line);
	}
}

int	main(int ac, char **av)
{
	t_list		*stack_a;
	t_list		*stack_b;

	if (ac < 2)
		exit(0);
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 2)
		ft_add_nb2(&stack_a, av);
	if (ac > 2)
		ft_add_nb(&stack_a, av);
	if (!check_doubles(&stack_a))
	{
		free_stack(stack_a);
		error(2);
	}
	get_move(stack_a, stack_b);
	if (check_sorted(&stack_a) && !stack_b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_stack(stack_a);
	return (0);
}
