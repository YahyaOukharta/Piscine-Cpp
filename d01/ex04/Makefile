NAME = replace

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch
	rm -f *.replace

fclean : clean
	rm -f $(NAME)

re : fclean all