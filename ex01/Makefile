# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anpollan <anpollan@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 13:17:32 by anpollan          #+#    #+#              #
#    Updated: 2026/01/20 13:32:04 by anpollan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

INCL_DIR	= ./incl/
H_FILES		= Phonebook.hpp Contact.hpp
INCLS		= $(addprefix $(INCL_DIR), $(H_FILES))

CPP_FILES	= main.cpp
SRC_DIR		= ./src/
SRCS		= $(addprefix $(SRC_DIR), $(CPP_FILES))

OBJ_FILES	= $(CPP_FILES:%.cpp=%.o)
OBJ_DIR		= ./obj/
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++20

all: $(NAME)

$(NAME): $(OBJS) $(INCLS)
	c++ $(CPP_FLAGS) $(OBJS) -I$(INCL_DIR) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	c++ $(CPP_FLAGS) -I$(INCL_DIR) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
