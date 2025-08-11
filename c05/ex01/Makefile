# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 22:25:31 by aborges           #+#    #+#              #
#    Updated: 2025/08/04 10:58:39 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bureaucrat
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98
HEADER		= Bureaucrat.hpp	\
			  Form.hpp
OBJS		= main.o 			\
			  Bureaucrat.o		\
			  Form.o

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