#!/bin/bash

norminette *.c
gcc -Werror -Wextra -Wall *.c

