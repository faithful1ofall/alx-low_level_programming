#!/bin/bash
gcc -c *.c
ar r liball.a *.o
ranlib liball.a
