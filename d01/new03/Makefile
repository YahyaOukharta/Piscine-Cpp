NAME = a.out

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp	main.cpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch

fclean : clean
	rm -f a.out

re : fclean all