#!/bin/bash
wget -P /tmp/ https://raw.github.com/Mundez-the-man/alx-low_level_programming/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
