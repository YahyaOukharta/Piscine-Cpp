NAME = convert

SRCS = main.cpp strToTypes.cpp isType.cpp

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