##
## EPITECH PROJECT, 2024
## makefile
## File description:
## for compilation
##

SRC	= ./src/main.c

OBJ	=	$(SRC:.c=.o)

EXE_NAME	=	secured

LIBMY = libmy.a

HASHTABLE = hashtable.a

LIBHASHTABLE = libhashtable.a

INCLUDE	=	-I./include/

LIB = -L./lib/my/ -lmy -L. -lhashtable

CFLAGS	+=	-Wall -Wextra ${INCLUDE}

all:	$(LIBHASHTABLE)

$(LIBHASHTABLE):
	make -C ./lib/my/
	make -C ./src/
	ar rcT $(LIBHASHTABLE) $(LIBMY) $(HASHTABLE)

debug:	$(LIBHASHTABLE) $(OBJ)
	gcc -o $(EXE_NAME) $(OBJ) -L. -lhashtable -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXE_NAME)
	rm -f $(LIBMY)
	rm -f $(HASHTABLE)
	rm -f $(LIBHASHTABLE)
	rm -f src/*.o
	rm -f lib/my/*.o
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a
	make -C ./src fclean

re : fclean all
