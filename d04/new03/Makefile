NAME = a.out

SRCS = AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp   Ice.cpp main.cpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch

fclean : clean
	rm -f $(NAME)

re : fclean all

c : fclean all
	clear
	./$(NAME)