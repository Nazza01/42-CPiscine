CC		=gcc
CFLAGS	=-Wall -Wextra -Werror
CFILE	:=$(shell find . -type f -name "*.c")
HFILE	:=$(shell find . -type f -name "*.h")
CLIB	=ar -rc libft.a *.o
RLIB	=ranlib libft.a
CLR		=rm -f *.o

all:
	make libft.a

libft.a:
	${CC} ${CFLAGS} -c ${CFILE}
	${CLIB}
	${RLIB}

clean:
	${CLR}

fclean:
	make clean

re:
	make fclean
	make all