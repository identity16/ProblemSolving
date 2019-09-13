#!/bin/bash

# $1 : BOJ problem number

cd $(dirname $0)
echo "compile.." $1
g++ $1.cpp
echo "Done!"
./a.out && rm a.out