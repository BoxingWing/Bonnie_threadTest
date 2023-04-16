cmake_minimum_required(VERSION 3.16)
project(baer_ethercat)

set(CMAKE_CXX_STANDARD 14)

find_package(Threads)

add_executable(mainTest main.cpp PeriodicTask.cpp PeriodicTask.h Timer.h Utilities_print.cpp Utilities_print.h cppTypes.h cTypes.h)

