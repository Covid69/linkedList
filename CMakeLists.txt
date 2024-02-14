cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)
# Set compiler flags for debug mode
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")


# Include directories
include_directories(inc)

# Source files
file(GLOB SOURCES "src/*.c")

# Executable
add_executable(output ${SOURCES})
