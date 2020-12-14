cmake_minimum_required(VERSION 3.10)

# set the project name
project(e1-dec2bin)
project(e2-logical-calc)
project(e3-power)

# add the executable
add_executable(e1-dec2bin e1-dec2bin.c)
add_executable(e2-logical-calc e2-logical-calc.c)
add_executable(e3-power e3-power.c power.h)