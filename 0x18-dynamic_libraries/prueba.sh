#!/bin/bash
wget -O /tmp/prueba.so https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/prueba.sh
export LD_PRELOAD=/tmp/prueba.so
