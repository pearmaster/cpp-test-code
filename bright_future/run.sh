#!/bin/sh

g++ --std=c++11 futures.cpp -lboost_thread -pthread -o futures

if [ $? -eq 0 ]; then
    ./futures
else
    echo "Did not compile"
fi

