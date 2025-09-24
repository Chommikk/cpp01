NAME = fairytail_of_pointers_variables_and_references
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp
HFILES = HumanA.hpp\
		 HumanB.hpp\
		 Weapon.hpp

OBJ = $(FILES:.cpp=.o)

all : $(OBJ) $(NAME)
	

$(NAME): $(OBJ) $(HFILES)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)


%.o : %.cpp
	$(CC) $(CFLAGS) -c -O  $< -o $@
	
clean :
	rm -f $(OBJ) $(BOBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all re fclean clean
