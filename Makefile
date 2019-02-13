# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/13 12:19:44 by ikovalen          #+#    #+#              #
#    Updated: 2019/02/13 12:19:45 by ikovalen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ikovalen.filler
FLAGS = -c -Wall -Wextra -Werror
OBJ = *.o
SRC = filler.c solve.c tools.c

all: $(NAME)

$(NAME):
	@make -C ft_printf
	gcc $(FLAGS) $(SRC)
	gcc $(OBJ) -L ft_printf/ -lftprintf -o $(NAME)

clean:
	@make -C ft_printf/ clean
	@rm -f $(OBJ)

fclean: clean
	@make -C ft_printf/ fclean
	@rm -f $(NAME)

re: fclean all