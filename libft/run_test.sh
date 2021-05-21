#!/bin/bash
make
wait -n
./test_file
wait -n
rm test_file