# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 15:41:12 by aborges           #+#    #+#              #
#    Updated: 2025/10/09 17:30:05 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

HEADER = Whatever.hpp
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