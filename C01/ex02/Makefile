# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 14:49:37 by aborges           #+#    #+#              #
#    Updated: 2025/06/12 10:43:07 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = aborges
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = 	main.cpp

OBJ = $(SRCS:%.cpp=%.o)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re