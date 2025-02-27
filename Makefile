##
## EPITECH PROJECT, 2024
## makefile
## File description:
## for compilation
##

SRC	=	src/main.c \
		src/hash.c \
		src/new_hashtable.c \
		src/delete_hashtable.c \
		src/ht_insert.c \
		src/ht_delete.c \
		src/ht_search.c

OBJ	=	$(SRC:.c=.o)

EXE_NAME	=	secured

INCLUDE	=	-I./include/

LIB = -L./lib/my/ -lmy

CFLAGS	+=	-Wall -Wextra ${INCLUDE}

all:	$(EXE_NAME)

$(EXE_NAME): $(OBJ)
	make -C ./lib/my/
	gcc -o $(EXE_NAME) $(OBJ) $(LIB)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(EXE_NAME)
	rm -f src/*.o
	rm -f lib/my/*.o
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a

re : fclean all
