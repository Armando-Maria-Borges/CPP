NAME = zomb
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = 	main.cpp		\
		newZombie.cpp	\
		randomChump.cpp	\
		Zombie.cpp
HEADER = Zombie.hpp

OBJS = $(SRCS:%.cpp=%.o)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re