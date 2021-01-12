#!/bin/bash

echo "Clearing"
dir=level; i=0; while [ $i -lt 9 ]; do rm ./$dir$i/$dir$i 2>/dev/null && echo "$dir$i binary deleted"; (( i++ )); done
dir=bonus; i=0; while [ $i -lt 4 ]; do rm ./$dir$i/$dir$i 2>/dev/null && echo "$dir$i binary deleted"; (( i++ )); done
rm ./level9/level9 2>/dev/null; 

echo "Compiling"
dir=level; i=0; while [ $i -lt 9 ]; do cp ./$dir$i/source* ./$dir$i/source.c; (( i++ )); done
dir=bonus; i=0; while [ $i -lt 4 ]; do cp ./$dir$i/source* ./$dir$i/source.c; (( i++ )); done
cp ./level9/source ./level9/source.c && g++ ./level9/source.c -o ./level9/level9 ; 
dir=level; i=0; while [ $i -lt 9 ]; do gcc -fno-stack-protector -z execstack -m32 -g ./$dir$i/source.c -o ./$dir$i/$dir$i; (( i++ )); done
dir=bonus; i=0; while [ $i -lt 4 ]; do gcc -fno-stack-protector -z execstack -m32 -g ./$dir$i/source.c -o ./$dir$i/$dir$i; (( i++ )); done

echo "Clearing"
dir=level; i=0; while [ $i -lt 9 ]; do rm ./$dir$i/source.c 2>/dev/null && echo "$dir$i/source.c deleted "; (( i++ )); done
dir=bonus; i=0; while [ $i -lt 4 ]; do rm ./$dir$i/source.c 2>/dev/null && echo "$dir$i/source.c deleted"; (( i++ )); done
rm ./level9/source.c 2>/dev/null; 


