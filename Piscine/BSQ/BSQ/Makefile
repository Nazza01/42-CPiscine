#####################################
#		Author: Nathanael Ervin		#
#	Last Modified 14/7/21 1711		#
#####################################

#################################################################
# 	A Makefile used to easily compile all .c files at once!		#
#	Usage:														#
# 		make	will compile all the files						#
# 		make clean	will remove the a.out file created			#
#################################################################

CC =gcc#											Use gcc as compiler
CFLAGS =-Werror -Wall -Wextra#						Use flags in exercise pdf to pass through to gcc
MAIN :=$(shell find . -type f -name "main.c")#		Uses main.c as the file containing a main()
HFILE :=$(shell find . -type f -name "*.h")#		Define header files so functions are defined
CFILE :=$(shell find . -type f ! -name "main.c" -name "*.c")#		Finds all .c file types in the current directory

all:#												Compiles the eval.c main file and all the exercise C files using the flags above
	${CC} ${CFLAGS} ${HFILE} ${CFILE} ${MAIN}

clean:# 											Removes the a.out file and any residual .o files
	rm -f a.out
	rm -f *.o