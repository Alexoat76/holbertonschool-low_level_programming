#!/bin/bash
# File: 1-create_dynamic_lib.sh
# Author: Alex Orland Arévalo Tribaldos
# email: <3915@holbertonschool.com>
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
