NAME=FragTrap
SRC= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJ=$(SRC:.cpp=.o)
CC=clang++
HEAD = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp
FLAGS=-Wall -Werror -Wextra -std=c++98
RM=rm -f
%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME)

$(NAME):$(OBJ) $(HEAD)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)
re:fclean all
.PHONY:all clean fclean re
