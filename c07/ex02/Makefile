# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 14:57:05 by aborges           #+#    #+#              #
#    Updated: 2025/10/15 15:00:35 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

HEADER = Array.hpp
OBJ = main.o

$(NAME) : $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re