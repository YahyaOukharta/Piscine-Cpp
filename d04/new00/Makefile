NAME = a.out

SRCS = Animal.cpp  Cat.cpp  Dog.cpp  main.cpp WrongAnimal.cpp WrongCat.cpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch

fclean : clean
	rm -f $(NAME)

re : fclean all