CC		=gcc
CFLAGS	=-Wall -Wextra -Werror

SRCS	="./srcs"
INCL	="./includes"

CFILES	=${SRCS}*.c
HFILES	=${INCL}*.h



# Compile all the .c files without worrying about a main function
gcc -Wall -Wextra -Werror -c *.c

# Creates the libft.a library using all the object files
# -r	Replaces or adds specific files to the archive (if it hasnt been created)
# -c	Creates the archive silently
ar -rc libft.a *.o

# Adds or updates object files in the static library
ranlib libft.a

# Removes all the object files to clean up the directory
rm -f *.o

