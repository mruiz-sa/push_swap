# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 19:11:27 by mruiz-sa          #+#    #+#              #
#    Updated: 2022/07/08 13:12:25 by mruiz-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ./srcs/ft_strlen.c \
			./srcs/ft_atoi.c \
			./srcs/ft_split.c \
			./srcs/ft_substr.c \
			./srcs/check_and_convert_args_utils.c \
			./srcs/check_no_characters.c \
			./srcs/free_and_exit_utils.c \
			./srcs/other_utils.c \
			./srcs/already_sorted.c \
			./srcs/repeated_nbrs.c \
			./srcs/sort_3_nbrs.c \
			./srcs/sort_5_nbrs.c \
			./srcs/start_algorithm.c \
			./srcs/copy_and_sort_stack.c \
			./srcs/checker.c \
			./movements/swap.c \
			./movements/push.c \
			./movements/rotate.c \
			./movements/reverse.c \
			./main.c

OBJECTS = $(SRC:.c=.o)

FLAGS = gcc -Wall -Werror -Wextra -g3

$(NAME): $(OBJECTS)
		@clear
		@echo "\n\033[92m"-------------\\n👌 COMPILED 👌\\n-------------\\n"\033[0m\n"
		@ar -rc $(NAME) $(OBJECTS)
		@ranlib $(NAME)
		@$(FLAGS) $(SRC) -o push_swap

all: $(NAME)

clean: 
		@clear
		@echo "\n\033[31m"-------------------\\n💣 DELETED FILES 💣\\n-------------------\\n"\033[0m\n"
		@rm -f $(OBJECTS)

fclean: clean
		@rm -rf $(NAME)
		@rm -rf push_swap

re: fclean all

.PHONY: all clean re