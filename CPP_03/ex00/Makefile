NAME=ClapTrap
SRC= ClapTrap.cpp main.cpp
OBJ=$(SRC:.cpp=.o)
HEAD = ClapTrap.hpp
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98
RM=rm -f
%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME) $(HEAD)

$(NAME):$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)
re:fclean all
.PHONY:all clean fclean re
