cmake_minimum_required(VERSION 3.28)
project(truth-unveiled)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

include_directories(include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(task1 src/Task1_5.cpp)
add_executable(task2 src/Task2_5.cpp)
add_executable(task3 src/Task3_5.cpp)
add_executable(task4 src/Task4_5.cpp)
