NAME = a.out

SRCS = main.cpp AWeapon.cpp	Enemy.cpp PowerFist.cpp \
		SuperMutant.cpp Character.cpp PlasmaRifle.cpp \
		RadScorpion.cpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	alias clang++=g++
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch

fclean : clean
	rm -f $(NAME)

re : fclean all