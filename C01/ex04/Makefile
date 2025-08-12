# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 14:50:53 by aborges           #+#    #+#              #
#    Updated: 2025/06/12 09:51:12 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = aborges
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
HEADER = header.hpp

OBJS = $(SRCS:%.cpp=%.o)

%.o:%.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re