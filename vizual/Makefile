NAME = filler
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) -I /usr/local/include vizual.c \
		img.c \
		../ft_printf/libftprintf.a \
		-L /usr/local/lib \
		-lmlx -framework OpenGL \
		-framework Appkit \
		-o vizual

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all	
