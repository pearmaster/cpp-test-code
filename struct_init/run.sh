#!/bin/sh

g++ --std=c++11 s.cpp -o struct_init

if [ $? -eq 0 ]; then
    ./struct_init
else
    echo "Did not compile"
fi

