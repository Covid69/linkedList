cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

# Set C standard
set(CMAKE_C_STANDARD 11)

# Include directories
include_directories(inc)

# Source files
file(GLOB SOURCES "src/*.c")

# Executable
add_executable(output ${SOURCES})
