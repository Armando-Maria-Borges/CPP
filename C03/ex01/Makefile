# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 15:55:53 by aborges           #+#    #+#              #
#    Updated: 2025/07/11 08:55:00 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ScavTrap
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror

HEADER		= ClapTrap.hpp	\
			  ScavTrap.hpp

OBJS		= main.o 		\
			  ClapTrap.o	\
			  ScavTrap.o

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