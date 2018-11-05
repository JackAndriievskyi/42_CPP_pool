#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/14 16:33:07 by yandriie          #+#    #+#              #
#    Updated: 2018/10/14 17:13:07 by yandriie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_gkrellm

SRC_FILES = ClassConsoleDisplay.cpp ClassNcursesDisplay.cpp \
			ClassIMonitorDisplay.cpp main.cpp ClassIMonitorModule.cpp \
			ClassUserInfoModule.cpp ClassTimeInfoModule.cpp ClassRAMInfoModule.cpp \
			ClassOsInfoModule.cpp ClassCPUInfoModule.cpp ClassNetInfoModule.cpp
SRC_PATH = sources/
SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))

OBJ_FILES = $(SRC_FILES:.cpp=.o)
OBJ_PATH = objectives/
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_FILES))

HDR_FILES = ClassConsoleDisplay.hpp ClassNcursesDisplay.hpp ClassQtDisplay.hpp \
			ClassIMonitorDisplay.hpp ClassIMonitorModule.hpp \
			ClassUserInfoModule.hpp ClassTimeInfoModule.hpp ClassRAMInfoModule.hpp \
			ClassOsInfoModule.hpp ClassCPUInfoModule.hpp ClassNetInfoModule.hpp
HDR_PATH = includes/
HDR = $(addprefix $(HDR_PATH), $(HDR_FILES))

CC = clang++
FLAGS = -Wall -Werror -Wextra
INCLUDES = -I$(HDR_PATH)

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INCLUDES) $(OBJ) -lncurses -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp $(HDR)
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	/bin/rm -fdR $(OBJ_PATH)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all