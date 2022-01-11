#!/bin/bash
wget -O /tmp/crack_mgm.so https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/f9737ea4b1a042ac2b1b4c5970c0d7f4e4463428/0x18-dynamic_libraries/crack_mgm.so
export LD_PRELOAD=/tmp/crack_mgm.so
