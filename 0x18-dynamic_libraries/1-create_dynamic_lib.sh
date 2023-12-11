#!/bin/bash

# Compile all .c files in the current directory into a dynamic library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -shared -o liball.so *.c

