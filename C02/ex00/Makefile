NAME = orthodox
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =		main.cpp		\
			Fixed.cpp

OBJS =		main.o 			\
			Fixed.o

HEADER =	Fixed.h

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re