/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:22:58 by ofadhel           #+#    #+#             */
/*   Updated: 2023/05/27 22:22:46 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <errno.h>
# include "printf/ft_printf.h"
# include "libft/libft.h"

int		swap_a(t_list **stack_a);
int		swap_b(t_list **stack_b);
int		swap_ab(t_list **stack_a, t_list **stack_b);
int		push_a(t_list **stack_a, t_list **stack_b);
int		push_b(t_list **stack_a, t_list **stack_b);
int		rot_a(t_list **stack_a);
int		rot_b(t_list **stack_b);
int		rot_ab(t_list **stack_a, t_list **stack_b);
int		reverse_rot_a(t_list **stack_a);
int		reverse_rot_b(t_list **stack_b);
int		reverse_rot_ab(t_list **stack_a, t_list **stack_b);

int		ft_add_nb(t_list **stack_a, char **av);
int		ft_add_nb2(t_list **stack_a, char **av);
int		ft_lstprint(t_list *lst);

void	algorithm(t_list **stack_a, t_list **stack_b, int size);
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);

void	turk(t_list **stack_a, t_list **stack_b);
void	ft_sort_b(t_list **stack_a, t_list **stack_b);
void	ft_sort_a(t_list **stack_a, t_list **stack_b);
int		ft_count_moves(t_list **stack_a, t_list **stack_b);

int		get_max(t_list *stack);
int		get_min(t_list *stack);

int		search_index(t_list *a, int nbr);
int		search_a(t_list *stack_a, int c);
int		search_b(t_list *stack_b, int c);
//int		ft_find_index(t_list *a, int c);

int		count_ab(t_list *a, t_list *b);
int		ft_rotate_type_ba(t_list *a, t_list *b);
int		rarb(t_list *stack_a, t_list *stack_b, int c);
int		rrarrb(t_list *stack_a, t_list *stack_b, int c);
int		rrarb(t_list *stack_a, t_list *stack_b, int c);
int		rarrb(t_list *stack_a, t_list *stack_b, int c);

int		apply_rarb(t_list **a, t_list **b, int c, char s);
int		apply_rrarrb(t_list **a, t_list **b, int c, char s);
int		apply_rrarb(t_list **a, t_list **b, int c, char s);
int		apply_rarrb(t_list **a, t_list **b, int c, char s);

int		check_sorted(t_list **stack_a);
void	error(int i);

#endif
