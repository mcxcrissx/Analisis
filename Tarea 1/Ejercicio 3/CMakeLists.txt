#minimun version

cmake_minimum_required(VERSION 2.8)

#project name

project(MyProject)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

#compile
add_executable(output ${PROJECT_SOURCE_DIR}/main.cpp)
