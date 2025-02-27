##
## EPITECH PROJECT, 2024
## makefile
## File description:
## for compilation
##

SRC	=	src/main.c \
		src/hash.c \

OBJ	=	$(SRC:.c=.o)

EXE_NAME	=	libhashtable.a

INCLUDE	=	-I./include/

LIB = -L./lib/my/ -lmy

CFLAGS	+=	-Wall -Wextra ${INCLUDE}

all:	$(EXE_NAME)

$(EXE_NAME): $(OBJ)
	make -C ./lib/my/
	ar rc $(EXE_NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(EXE_NAME)
	rm -f lib/my/*.o
	rm -f src/*.o
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a

re : fclean all
