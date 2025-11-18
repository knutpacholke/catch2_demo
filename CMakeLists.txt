cmake_minimum_required(VERSION 3.15)
project(catch2_demo)
# Generate the library libfizzbuzz
add_library(libfizzbuzz src/fizzbuzz.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
# For Catch2 Testing
add_subdirectory(tests)
