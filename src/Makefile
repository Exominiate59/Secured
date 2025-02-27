##
## EPITECH PROJECT, 2024
## makefile
## File description:
## for compilation
##

SRC	=	hash.c \
		new_hashtable.c \
		delete_hashtable.c \
		ht_insert.c \
		ht_delete.c \
		ht_search.c\
		ht_dump.c

OBJ	=	$(SRC:.c=.o)

EXE_NAME	=	hashtable.a

INCLUDE	=	-I../include/

LIB = -L./lib/my/ -lmy

CFLAGS	+=	-Wall -Wextra ${INCLUDE}

all:	$(EXE_NAME)

$(EXE_NAME): $(OBJ)
	make -C ../lib/my/
	ar rc $(EXE_NAME) $(OBJ)
	mv $(EXE_NAME) ../.

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(EXE_NAME)
	rm -f src/*.o
	rm -f lib/my/*.o
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a

re : fclean all
