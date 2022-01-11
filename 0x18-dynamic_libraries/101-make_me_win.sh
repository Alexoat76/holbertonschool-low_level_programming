#!/bin/bash
wget -O /tmp/crack_mega_millions.so https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/98e463bb02394f493e6b1c634ea3a8a4e1fc324c/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/crack_mega_millions.so ./gm
