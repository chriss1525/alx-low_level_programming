#!/bin/bash
gcc -Wall -fPIC -c 100-{add,sub,mul,div,mod}.c
gcc -shared -o 100-operations.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH