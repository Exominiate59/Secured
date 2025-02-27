##
## EPITECH PROJECT, 2024
## makefile
## File description:
## for compilation
##

SRC	= main.c

OBJ	=	$(SRC:.c=.o)

EXE_NAME	=	libhashtable.a

LIBMY = libmy.a

HASHTABLE = hashtable.a

INCLUDE	=	-I./include/

LIB = -L./lib/my/ -lmy

CFLAGS	+=	-Wall -Wextra ${INCLUDE}

all:	$(EXE_NAME)

$(EXE_NAME):
	make -C ./lib/my/
	make -C ./src/
	ar rcT $(EXE_NAME) $(LIBMY) $(HASHTABLE)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(EXE_NAME)
	rm -f $(LIBMY)
	rm -f $(HASHTABLE)
	rm -f src/*.o
	rm -f lib/my/*.o
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a

re : fclean all
