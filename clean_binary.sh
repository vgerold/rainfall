#!/bin/bash

echo "Clearing"
dir=level; i=0; while [ $i -lt 9 ]; do rm ./$dir$i/$dir$i 2>/dev/null && echo "$dir$i binary deleted"; (( i++ )); done
dir=bonus; i=0; while [ $i -lt 4 ]; do rm ./$dir$i/$dir$i 2>/dev/null && echo "$dir$i binary deleted"; (( i++ )); done

