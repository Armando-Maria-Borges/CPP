# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 09:41:18 by aborges           #+#    #+#              #
#    Updated: 2025/06/26 10:21:38 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixedpoint
CXX = c++
CXXFLAGS = -Wall -Wextra -Wall -std=c++98
SRCS = 	main.cpp	\
		Fixed.cpp

HEADER =	Fixed.hpp

OBJS = main.o 		\
	   Fixed.o

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
