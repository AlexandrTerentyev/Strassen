cmake_minimum_required(VERSION 3.8)
project(Strassen)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp HelperFunctions.cpp HelperFunctions.h)
add_executable(Strassen ${SOURCE_FILES})