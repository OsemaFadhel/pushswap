# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofadhel <ofadhel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 10:25:51 by ofadhel           #+#    #+#              #
#    Updated: 2023/06/24 19:54:45 by ofadhel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAMES

NAME	= push_swap

BONUS 	= checker

# LIBFT PATH

LIBFT_PATH 	= ./libft

LIBFT 	= $(LIBFT_PATH)

# PRINTF PATH

PRINTF_PATH	= ./printf

PRINTF	= $(PRINTF_PATH)

# SOURCES

SRC		=   srcs/main.c srcs/sort.c srcs/apply_move.c srcs/add_nb.c srcs/algorithm.c srcs/check.c \
			srcs/rules_1.c srcs/rules_2.c srcs/rules_3.c srcs/rules_4.c \
			srcs/error.c srcs/min_max.c srcs/find_place.c \
			srcs/count_move.c

OBJ		= 	$(SRC:.c=.o)

# BONUS

SRC_BONUS = bonus/srcs/main.c bonus/srcs/rules_1.c bonus/srcs/rules_2.c bonus/srcs/rules_3.c bonus/srcs/rules_4.c \
			bonus/gnl/get_next_line_utils.c bonus/gnl/get_next_line.c bonus/srcs/utils.c bonus/srcs/error.c \

OBJ_BONUS = $(SRC_BONUS:.c=.o)

# COMPILATION

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

ECHO	=	@echo "$(COLOUR_YELLOW)Compiling..."

# COLOURS

COLOUR_GREEN = \033[0;32m

COLOUR_RED = \033[0;31m

COLOUR_YELLOW = \033[0;33m

COLOUR_END = \033[0m

# RULES

all		:	$(NAME)

$(NAME)	:		$(OBJ)
				$(ECHO)
				make -C $(PRINTF_PATH)
				make -C $(LIBFT_PATH)
				$(CC) $(CFLAGS) $(OBJ) $(PRINTF)/libftprintf.a $(LIBFT)/libft.a -o $(NAME)
				@echo "$(COLOUR_GREEN)PUSH_SWAP: READY TO GO!$(COLOUR_END)"

bonus	:	$(OBJ_BONUS)
				$(ECHO)
				make -C $(PRINTF_PATH)
				make -C $(LIBFT_PATH)
				$(CC) $(CFLAGS) $(OBJ_BONUS) $(PRINTF)/libftprintf.a $(LIBFT)/libft.a -o $(BONUS)
				@echo "$(COLOUR_GREEN)CHECKER: READY TO GO!$(COLOUR_END)"

clean	:
				@echo "$(COLOUR_RED)Cleaning...$(COLOUR_END)"
				make fclean -C ${PRINTF_PATH}
				make fclean -C ${LIBFT_PATH}
				rm -rf $(OBJ)
				rm -rf $(OBJ_BONUS)

fclean	:		clean
				rm -rf $(NAME) $(BONUS)
				@echo "$(COLOUR_RED)All clean!$(COLOUR_END)"

re		:		fclean all
