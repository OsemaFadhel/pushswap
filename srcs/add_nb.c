/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_nb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:19:01 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/22 00:15:47 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_split(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

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
			error(2);
		j++;
	}
	nb = 0;
	while (tab[nb])
	{
		free(tab[nb]);
		nb++;
	}
	free(tab);
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
			error(2);
		j++;
	}
	return (j - 1);
}
