NAME=Bureaucrat
SRC= Bureaucrat.cpp main.cpp
HEAD = Bureaucrat.hpp
OBJ=$(SRC:.cpp=.o)
CC=clang++
FLAGS=-Wall -Werror -Wextra -std=c++98
RM=rm -f
%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

all: $(NAME) $(HEAD)

$(NAME):$(OBJ) $(HEAD)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)
re:fclean all
.PHONY:all clean fclean re
