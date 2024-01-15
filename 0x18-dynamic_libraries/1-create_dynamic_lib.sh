#!/bin/bash
gcc -fPIC -c -Wall -Werror -Wextra *.c
gcc -shared -o liball.so *.o

