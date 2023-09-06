cmake_minimum_required(VERSION 3.27)

project(EXPENSE_TRACKER_CPP)
set(CMAKE_CXX_STANDARD 14)   

# Add your source files here
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(EXPENSE_TRACKER_CPP ${SOURCES})


