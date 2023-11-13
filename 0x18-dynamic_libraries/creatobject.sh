#!/bin/bash
gcc -c -FPIC *.c 
gcc -shared *.o -o libdynamic.so
