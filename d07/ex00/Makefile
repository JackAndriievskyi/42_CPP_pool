#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/11 09:12:43 by yandriie          #+#    #+#              #
#    Updated: 2018/10/11 12:55:50 by yandriie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = whatever

SRC = whatever.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $< -o $@

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
