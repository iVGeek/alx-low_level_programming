#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -o liball.so -fPIC *.o
