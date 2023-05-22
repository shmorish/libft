#!/bin/bash

if [ -e result.log ]; then
    rm error.log
fi
cd ..
if [ ! -e libft-unit-test ]; then
    git clone https://github.com/alelievr/libft-unit-test.git
fi
cd libft-unit-test
make
./run_test
mv result.log ../libft
cd ../libft
if [ $# -eq 0 ]; then
    rm -rf ../libft-unit-test
fi
make clean