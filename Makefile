# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 10:25:51 by ofadhel           #+#    #+#              #
#    Updated: 2023/05/01 20:10:53 by ofadhel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME : push_swap

LIBFT_PATH 	= ./libft
PRINTF_PATH = ./printf
LIBFT 		= $(LIBFT_PATH)
PRINTF 		= $(PRINTF_PATH)
SRC 		= 		push_swap.c rules_1.c rules_2.c rules_3.c
OBJ 		= 		$(SRC:.c=.o)
CC 			= 		gcc
CFLAGS 		= 		-Wall -Wextra -Werror

all		: 	$(NAME)

$(NAME)	:	$(OBJ)
			make -C $(PRINTF_PATH)
			make -C $(LIBFT_PATH)
			$(CC) $(CFLAGS) $(OBJ) $(PRINTF)/libftprintf.a $(LIBFT)/libft.a -o $(NAME)

clean	:
			make clean -C ${PRINTF_PATH}
			make clean -C ${LIBFT_PATH}
			rm -f $(OBJ)

fclean	:	clean
			make clean -C ${PRINTF_PATH}
			rm -f $(NAME)

re		:	fclean all
