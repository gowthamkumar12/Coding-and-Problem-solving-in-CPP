cmake_minimum_required(VERSION 3.10)
project(Trees)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(inc)

# Add source files
set(SOURCES
    src/BinaryTree.cpp
    src/PrintLeafNodesOfBinaryTree.cpp
    main.cpp
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})
