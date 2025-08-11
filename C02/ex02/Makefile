# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/23 15:21:29 by aborges           #+#    #+#              #
#    Updated: 2025/06/26 10:07:13 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= talking
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp	\
		  Fixed.cpp

HEADER	= Fixed.hpp

OBJS	= main.o	\
		  Fixed.o

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean rm
