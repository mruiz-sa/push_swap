# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 19:11:27 by mruiz-sa          #+#    #+#              #
#    Updated: 2022/06/29 19:26:59 by mruiz-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ./srcs/ft_strlen.c \
			./main.c

OBJECTS = $(SRC:.c=.o)

FLAGS = gcc -Wall -Werror -Wextra

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