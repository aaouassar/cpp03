NAME = ClapTrap

GCC := c++ -Werror -Wextra -Wall  -std=c++98 

SRC := main.cpp ClapTrap.cpp 

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all