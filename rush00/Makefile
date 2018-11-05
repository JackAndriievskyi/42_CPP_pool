#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 09:12:43 by yandriie          #+#    #+#              #
#    Updated: 2018/10/07 20:51:51 by yandriie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_retro

SRC = ClassEventType.cpp ClassGameEvent.cpp ClassGameObject.cpp ClassList.cpp \
		ClassObjectBackgroundStar.cpp ClassObjectEnemy.cpp ClassObjectPlayer.cpp \
		ClassObjectProjectile.cpp ClassRetroGame.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -lncurses -o $@

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
