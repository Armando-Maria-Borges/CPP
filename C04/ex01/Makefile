# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 22:25:31 by aborges           #+#    #+#              #
#    Updated: 2025/07/21 11:40:16 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Polymorphism
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

HEADER		= Animal.hpp 		\
			  Dog.hpp			\
			  Cat.hpp 			\
			  WrongAnimal.hpp	\
			  WrongCat.hpp		\
			  Brain.hpp

OBJS		= main.o 			\
			  Animal.o 			\
			  Dog.o				\
			  Cat.o 			\
			  WrongAnimal.o		\
			  WrongCat.o		\
			  Brain.o

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(HEADER)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean