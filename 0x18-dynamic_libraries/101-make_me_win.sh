#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Stellanwae/alx-low_level_programming/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD="$PWD/../libmask.so"
