#!/bin/bash
make
wait -n
./libft.a
wait -n
rm libft.a