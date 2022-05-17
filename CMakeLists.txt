cmake_minimum_required(VERSION 3.21)
project(MathGauss)

set(CMAKE_CXX_STANDARD 17)

add_executable(MathGauss main.cpp Gauss.h Gauss.cpp function.h function.cpp)
