# CFILES=$(wildcard ex**/*.c)
SDIR = $(./ex**)
CFILES := $(bash find $(SDIR) -name '*.c')
MAIN = $(eval.c)
OBJ = $(CFILES:.c=.o)
OUT = main
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I .

$(OUT): $(OBJ)

.PHONY: clean

clean:
	rm -f $(OBJ) $(OUT)