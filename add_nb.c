/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_nb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:19:01 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/12 19:58:54 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_add_nb2(t_list **stack_a, char **av)
{
	int		j;
	int		nb;
	char	**tab;

	j = 0;
	tab = ft_split(av[1], ' ');
	while (tab[j])
	{
		if (ft_isdigit(tab[j]))
		{
			nb = ft_atoi(tab[j]);
			ft_lstadd_back(stack_a, ft_lstnew(nb));
		}
		else
			ft_printf("Error: Invalid argument!\n");
		j++;
	}
	return (j - 1);
}

int	ft_add_nb(t_list **stack_a, char **av)
{
	int		j;
	int		nb;

	j = 1;
	while (av[j])
	{
		if (ft_isdigit(av[j]))
		{
			nb = ft_atoi(av[j]);
			ft_lstadd_back(stack_a, ft_lstnew(nb));
		}
		else
			ft_printf("Error: Invalid argument!\n");
		j++;
	}
	return (j - 1);
}
