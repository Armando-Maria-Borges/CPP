# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 12:38:35 by aborges           #+#    #+#              #
#    Updated: 2025/07/11 13:33:34 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= FragTrap
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror

HEADER		= ClapTrap.hpp	\
			  ScavTrap.hpp	\
			  FragTrap.hpp

OBJS		= main.o 		\
			  ClapTrap.o	\
			  ScavTrap.o	\
			  FragTrap.o

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