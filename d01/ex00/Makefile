NAME = a.out

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f Zombie.hpp.gch

fclean : clean
	rm -f $(NAME)

re : fclean all