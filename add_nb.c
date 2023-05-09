/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_nb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:19:01 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/10 01:22:54 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
t_list	*ft_lstnew_1(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
} */

void	ft_add_nb2(t_list **stack_a, char **av)
{
	int		j;
	int		nb;
	char	**tab;

	j = 1;
	while (av[j])
	{
		tab = ft_split(av[j], ' ');
		j = 0;
		if (!ft_isdigit(av[j]))
		{
			nb = ft_atoi(av[j]);
			ft_lstadd_back(stack_a, ft_lstnew(nb));
		}
		else
			ft_printf("Error: Invalid argument!\n");
		j++;
	}
}

void	ft_add_nb(t_list **stack_a, char **av)
{
	int		j;
	int		nb;

	j = 1;
	while (av[j])
	{
		if (!ft_isdigit(av[j]))
		{
			nb = ft_atoi(av[j]);
			ft_lstadd_back(stack_a, ft_lstnew(nb));
		}
		else
			ft_printf("Error: Invalid argument!\n");
		j++;
	}
}
