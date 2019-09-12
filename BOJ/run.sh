#!/bin/bash

# $1 : BOJ problem number

cd $(dirname $0)
echo "compile.." $1
gcc $1.cpp && ./a.out && rm a.out