/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:22:58 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/23 23:23:09 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <errno.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"

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
int		check_sorted(t_list **stack_a);
int		check_doubles(t_list **stack_a);
int		ft_add_nb(t_list **stack_a, char **av);
int		ft_add_nb2(t_list **stack_a, char **av);
void	error(int i);

#endif
