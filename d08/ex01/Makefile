NAME = ex01

SRCS = main.cpp Span.cpp

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch
	rm -rf *.dSYM
fclean : clean
	rm -f $(NAME)

re : fclean all

c : fclean all
	clear
	./$(NAME)