NAME = a.out

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

FLAGS = -Wall -Wextra -Werror -Wshadow

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch

fclean : clean
	rm -f $(NAME)

re : fclean all