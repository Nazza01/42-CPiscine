CC		=gcc
CFLAGS	=-Wall -Wextra -Werror
CFILE	:=$(shell find . -type f -name "srcs/*.c")
HFILE	:=$(shell find . -type f -name "includes/*.h")
CLIB	=ar -rc libft.a *.o
RLIB	=ranlib libft.a
CLR		=rm -f *.o

all:
	make libft.a

clean:
	@echo "clean"

fclean:
	@echo "fclean"

re:
	@echo "re"

libft.a:
	@echo "libft.a"
	${CC} ${CFLAGS} -c ${CFILE}

# # Compile all the .c files without worrying about a main function
# gcc -Wall -Wextra -Werror -c *.c

# # Creates the libft.a library using all the object files
# # -r	Replaces or adds specific files to the archive (if it hasnt been created)
# # -c	Creates the archive silently
# ar -rc libft.a *.o

# # Adds or updates object files in the static library
# ranlib libft.a

# # Removes all the object files to clean up the directory
# rm -f *.o

