#!/bin/bash
gcc -Wall -Werror -Wextra -o test *.c
wait -n
./test
wait -n
rm test