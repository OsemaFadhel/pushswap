/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:25:12 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/04 17:34:46 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
	{
		ft_printf("Error: Not enough arguments!\n");
		return (0);
	}
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 2)
	{
		ft_add_nb2(&stack_a, av[1]);
	}
	if (ac > 2)
	{
		ft_add_nb(&stack_a, av);
	}
	return (0);
}
