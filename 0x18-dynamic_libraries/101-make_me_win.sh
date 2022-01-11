#!/bin/bash
wget -O /tmp/crack_mega_millions.so https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/b188792c24671d94b882e2e2d296aacbdc83eeab/0x18-dynamic_libraries/crack_mega_millions.so
export LD_PRELOAD=/tmp/crack_mega_millions.so
