#!/bin/bash
wget -O /tmp/crack_mega_millions.so https://github.com/Alexoat76/holbertonschool-low_level_programming/0x18-dynamic_libraries/crack_mega_millions.so
export LD_PRELOAD=/tmp/crack_mega_millions.so ./gm
