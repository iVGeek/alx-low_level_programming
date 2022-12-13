#!/bin/bash
wget https://github.com/iVGeek/alx-low_level_programming/blob/master/0x18-dynamic_libraries/inject.so -P ../
export LD_PRELOAD=../inject.so
