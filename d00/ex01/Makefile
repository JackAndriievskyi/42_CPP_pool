#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 09:12:43 by yandriie          #+#    #+#              #
#    Updated: 2018/11/05 11:34:16 by yandriie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = phonebook

SRC = phonebook.cpp ClassPhoneBook.cpp ClassContactForm.cpp

HDR = ClassPhoneBook.hpp ClassContactForm.hpp

OBJ = $(SRC:.cpp=.o)

CC = clang++
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HDR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
