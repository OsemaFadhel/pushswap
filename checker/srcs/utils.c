/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 23:08:35 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/23 23:23:46 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_sorted(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	check_doubles(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack_a;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->content == tmp2->content)
				error(3);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (1);
}
void	free_tab(char **tab)
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
	long	j;
	long	nb;
	char	**tab;

	j = 0;
	tab = ft_split(av[1], ' ');
	while (tab[j])
	{
		if (ft_isdigit(tab[j]))
		{
			nb = ft_atoi(tab[j]);
			if (nb > 2147483647 || nb < -2147483648)
				error(5);
			ft_lstadd_back(stack_a, ft_lstnew(nb));
		}
		else
			error(2);
		j++;
	}
	nb = 0;
	free_tab(tab);
	return (j);
}

int	ft_add_nb(t_list **stack_a, char **av)
{
	long		j;
	long		nb;

	j = 1;
	while (av[j])
	{
		if (ft_isdigit(av[j]))
		{
			nb = ft_atoi(av[j]);
			if (nb > 2147483647 || nb < -2147483648)
				error(5);
			ft_lstadd_back(stack_a, ft_lstnew(nb));
		}
		else
			error(2);
		j++;
	}
	return (j - 1);
}
