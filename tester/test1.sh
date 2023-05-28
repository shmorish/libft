#!/bin/bash

if [ -e error.log ]; then
    rm error.log
fi
if [ ! -e libft-tester-tokyo ]; then
    git clone https://github.com/usatie/libft-tester-tokyo.git
fi
cd libft-tester-tokyo
make
make bonus
mv error.log ..
cd ..
make clean
if [ $# -eq 0 ]; then
    rm -rf libft-tester-tokyo
fi
