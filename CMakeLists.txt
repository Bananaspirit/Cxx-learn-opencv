cmake_minimum_required(VERSION 3.10)

project(CLO)

# Find OpenCV package
find_package(OpenCV REQUIRED)

add_executable(CLO
    ./source/main.cpp
    )

# Link OpenCV libraries
target_link_libraries(CLO ${OpenCV_LIBS})