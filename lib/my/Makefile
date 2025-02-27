##
## EPITECH PROJECT, 2024
## makefile
## File description:
## for compilation
##

SRC	=	my_compute_power_rec.c\
		my_compute_power_it.c\
		my_compute_square_root.c\
		my_find_prime_sup.c\
		my_isneg.c\
		my_is_prime.c\
		my_print_params.c\
		my_putchar.c\
		my_putstr.c\
		my_put_nbr.c\
		my_revstr.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strstr.c\
		my_strupcase.c\
		my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

HEADER	=	my.h

CFLAGS	+=	-Wall -Wextra

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar rcs $(NAME) $(OBJ)
	cp $(NAME) ../$(NAME)
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	fclean all
