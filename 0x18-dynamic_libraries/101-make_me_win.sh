#!/bin/bash
wget -P /tmp https://github.com/ify-zi/alx-low_level_programming/blob/96626a4ba9cb739c497a3c2dfaa5f7a1302dbd65/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libmask.so
