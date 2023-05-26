/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:19:47 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/26 22:48:12 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int	ft_find_index(t_list *a, int c)
{
	int		i;

	i = 0;
	while (a->content != c)
	{
		i++;
		a = a->next;
	}
	return (i);
} */

int	search_index(t_list *a, int nbr)
{
	t_list	*tmp;
	int		i;

	tmp = a;
	i = 0;
	while (tmp->content != nbr)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	ft_find_b(t_list *stack_b, int c)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (c > stack_b->content && c < ft_lstlast((stack_b)->content))
		i = 0;
	else if (c > get_max(stack_b) || c < get_min(stack_b))
		i = search_index(stack_b, get_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->content < c || tmp->content > c)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_a(t_list *stack_a, int c)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (c < stack_a->content && c > ft_lstlast((stack_a)->content))
		i = 0;
	else if (c > get_max(stack_a) || c < get_min(stack_a))
		i = search_index(stack_a, get_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->content > c || tmp->content < c)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}
