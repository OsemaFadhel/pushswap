# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 10:25:51 by ofadhel           #+#    #+#              #
#    Updated: 2023/05/27 19:31:06 by ofadhel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= push_swap
LIBFT_PATH 	= ./libft
LIBFT 	= $(LIBFT_PATH)
PRINTF_PATH	= ./printf
PRINTF	= $(PRINTF_PATH)
SRC	=  	push_swap.c sort.c count_move.c srcs/add_nb.c srcs/algorithm.c srcs/check.c \
		srcs/rules_1.c srcs/rules_2.c srcs/rules_3.c \
		srcs/error.c srcs/min_max.c srcs/find_place.c \
		count_rot.c
OBJ	= 	$(SRC:.c=.o)
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all		: 	$(NAME)

$(NAME)	:	$(OBJ)
			make -C $(PRINTF_PATH)
			make -C $(LIBFT_PATH)
			$(CC) $(CFLAGS) $(OBJ) $(PRINTF)/libftprintf.a $(LIBFT)/libft.a -o $(NAME)

clean	:
			make fclean -C ${PRINTF_PATH}
			make fclean -C ${LIBFT_PATH}
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all
