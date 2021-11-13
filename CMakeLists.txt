cmake_minimum_required(VERSION 3.20)
project(Labo05_C_MCRM_PB)

set(CMAKE_CXX_STANDARD 20)

add_executable(Labo05_C_MCRM_PB main.cpp inputs.cpp inputs.h Chrono.cpp Chrono.h
        Generator.cpp Generator.h)
