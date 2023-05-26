/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:25:12 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/26 22:59:42 by ofadhel          ###   ########.fr       */
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
	algorithm(&stack_a, &stack_b, size);
	ft_lstprint(stack_a);
	if (!check_sorted(&stack_a))
		error(4);
	ft_printf("SORTED\n");
	ft_lstprint(stack_b);
	return (0);
}
