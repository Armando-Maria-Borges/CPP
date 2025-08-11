# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 15:55:53 by aborges           #+#    #+#              #
#    Updated: 2025/07/11 09:01:45 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ClapTrap
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror

HEADER		= ClapTrap.hpp

OBJS		= main.o 		\
			  ClapTrap.o 

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(HEADER)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean