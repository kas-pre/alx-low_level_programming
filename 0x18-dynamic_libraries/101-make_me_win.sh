#!/bin/bash
wget -P /tmp https://github.com/kas-pre/alx-low_level_programming/putshack.so
export LD_PRELOAD=/tmp/putshack.so
