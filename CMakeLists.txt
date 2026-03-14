cmake_minimum_required(VERSION 3.28.3)
project(ProjectOrbit)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Bin)

include_directories(${CMAKE_SOURCE_DIR}/Dependencies/GLFW)

add_executable(ProjectOrbit Src/Main.cpp)