#!/bin/bash

if [ -e error.log ]; then
    rm error.log
fi
if [ ! -e libft-tester-tokyo ]; then
    git clone https://github.com/Tripouille/libftTester.git
fi
cd libftTester
make a
mv error.log ..
cd ..
make clean
if [ $# -eq 0 ]; then
    rm -rf libftTester
fi