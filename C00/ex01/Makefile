# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborges <aborges@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 12:03:00 by aborges           #+#    #+#              #
#    Updated: 2025/06/03 14:04:29 by aborges          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = aborges
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
		Contact.cpp	\
		PhoneBook.cpp

OBJS = $(SRCS:%.cpp=%.o)
%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re