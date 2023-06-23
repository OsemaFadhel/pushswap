/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:25:12 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/23 23:09:49 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list		*stack_a;
	t_list		*stack_b;
	int			size;

	if (ac < 2)
		error(1);
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 2)
		size = ft_add_nb2(&stack_a, av);
	if (ac > 2)
		size = ft_add_nb(&stack_a, av);
	check_doubles(&stack_a);
	if (!check_sorted(&stack_a))
	{
		algorithm(&stack_a, &stack_b, size);
		free_stack(stack_a);
	}
	else if (check_sorted(&stack_a))
		free_stack(stack_a);
	return (0);
}
