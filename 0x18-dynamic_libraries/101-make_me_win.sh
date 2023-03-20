#!/bin/bash
wget -P /tmp https://github.com/Ronlin1/alx-low_level_programming/putshack.so
export LD_PRELOAD=/tmp/putshack.so