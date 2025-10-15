# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 15:41:12 by aborges           #+#    #+#              #
#    Updated: 2025/10/09 19:15:35 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

HEADER = Iter.hpp
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