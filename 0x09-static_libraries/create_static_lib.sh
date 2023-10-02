#!/bin/bash
gcc -c *.c
ar c liball.a *.o
ranlib liball.a
