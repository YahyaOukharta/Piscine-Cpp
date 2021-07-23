NAME = a.out

SRCS = Animal.cpp  Cat.cpp  Dog.cpp  main.cpp Brain.cpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	g++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch

fclean : clean
	rm -f $(NAME)

re : fclean all