NAME = a.out

SRCS = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp main.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp 

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	clang++ -o $(NAME) $(FLAGS) $(SRCS) 

clean :
	rm -f *.hpp.gch

fclean : clean
	rm -f *_shrubbery
	rm -f $(NAME)

re : fclean all

c : fclean all
	clear
	./$(NAME)