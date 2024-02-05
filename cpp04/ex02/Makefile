SRC =  main.cpp WrongCat.cpp WrongAnimal.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
NAME = main
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ) 

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all