/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:11:30 by ofadhel           #+#    #+#             */
/*   Updated: 2023/06/23 23:22:19 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	error(int i)
{
	if (i == 1)
		ft_printf("Error: Not enough arguments!\n");
	else if (i == 2)
		ft_printf("Error: Invalid argument!\n");
	else if (i == 3)
		ft_printf("Error: Duplicate argument!\n");
	else if (i == 4)
		ft_printf("Error: Not sorted\n");
	else if (i == 5)
		ft_printf("Error: INT OVERFLOW\n");
	else if (i == 6)
		ft_printf("Error\n");
	exit(1);
}
