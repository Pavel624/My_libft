NAME = libft
SRCS = ./*.c 
OBJ = ./*.o
FLAGS =-Wall -Wextra -Werror
INCLUDES = -c -I ./libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
