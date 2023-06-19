#!/bin/bash
wget -O /tmp/will.so https://github.com/Manalkl/alx-low_level_programming/raw/master/0x18-dynamic_libraries/will.so
export LD_PRELOAD=/tmp/will.so
