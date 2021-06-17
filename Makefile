SRC = ./tree.c \

OBJ = $(SRC:.c=.o)

NAME = binary_name

$(NAME): $(OBJ)
         gcc -o $(NAME) $(OBJ)

all:     $(NAME)

clean:
        rm -f $(OBJ)

fclean: clean
        rm -f $(NAME)

re:     fclean all
