#!/bin/bash
echo "making the executable"
make clean
make
echo "running the executable"
./executables/testing
echo "making plots"
cd plots/
python plot_surface.py
echo "showing the plots"
open calc_sol.png
cd ..

