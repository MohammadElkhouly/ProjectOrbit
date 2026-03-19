cmake_minimum_required(VERSION 3.16)
project(ProjectOrbit)

set(CMAKE_CXX_STANDARD 17)

# Add GLFW subdirectory
add_subdirectory(Dependencies/GLFW)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Bin)

# Add executable with GLAD source
add_executable(ProjectOrbit
    Src/Main.cpp
    Dependencies/GLAD/src/glad.c
)

# Include directories
target_include_directories(ProjectOrbit PRIVATE
    Dependencies/GLAD/include
)

# Link libraries
target_link_libraries(ProjectOrbit PRIVATE glfw OpenGL::GL)