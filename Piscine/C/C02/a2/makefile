#####################################
#		Author: Nathanael Ervin		#
#	Last Modified 06/07/2021 1224	#
#####################################

#################################################################
# 	A Makefile used to easily compile all .c files at once!		#
#	Usage:														#
# 		make	will compile all the files						#
# 		make clean	will remove the a.out file created			#
#################################################################

CC =gcc#											Use gcc as compiler
CFLAGS =-Werror -Wall -Wextra#						Use flags in exercise pdf to pass through to gcc
MAIN :=$(shell find . -type f -name "eval.c")#		Use eval.c as the file containing main()
CFILES :=$(shell find ex** -type f -name "*.c")#	Uses the find function to find all .c file types in the ex** folders

all:#												Compiles the eval.c main file and all the exercise C files using the flags above
	@echo "Compiling"
	${CC} ${CFLAGS} ${CFILES} ${MAIN}

clean:# 											Removes the a.out file
	@echo "Cleaning up object files..."
	rm -f a.out