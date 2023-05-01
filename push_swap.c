/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:25:12 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/01 19:21:25 by ofadhel          ###   ########.fr       */
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
		if (ft_strchr(av[1], ' '))
			stack_a = ft_split(av[1], ' ');
		else
			stack_a = ft_split(av[1], '\n');
	}
	else
		stack_a = ft_split(av[1], ' ');
}
