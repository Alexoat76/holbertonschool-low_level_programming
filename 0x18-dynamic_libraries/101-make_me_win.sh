#!/bin/bash
wget -P /tmp https://github.com/Alexoat76/holbertonschool-low_level_programming/blob/955493bc2b37f8b005a01cb9616b82ac9a11b3e5/0x18-dynamic_libraries/mgm.so
export LD_PRELOAD=/tmp/mgm.so
