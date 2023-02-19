##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## it makes files
##

SRC = 	$(wildcard src/*.c lib/my/*.c)

OBJ = $(SRC:.c=.o)

CFLAGS += -g -Wall -Wextra -I./lib/includes -L./lib/my -lmy

CritFLAGS += -lcriterion

NAME = "my_print_case"

$(NAME): $(OBJ)
	gcc -g -o $(NAME) $(OBJ) $(CritFLAGS)

all:     $(NAME)

clear:
	make
	clear
	echo "Done !"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re clear
