.PHONY: all re clean fclean

CPP = clang++
CPFLAG = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
all: $(NAME)

SRC = phonebook.cpp \
	search.cpp \
	main.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CPP) $(CPFLAG) $^ -o $@

%.o: %.cpp
	$(CPP) $(CPFLAG) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)