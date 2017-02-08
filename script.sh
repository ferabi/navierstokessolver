#!/bin/bash
echo "making the executable"
make clean
make
echo "running the executable"
./executables/testing
echo "making plots"
cd plots/
python plot.py
echo "showing the plots"
display calc_sol.png
cd ..

