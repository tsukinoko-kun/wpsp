cmake_minimum_required(VERSION 3.29)
project(MyProject LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
file(GLOB SOURCES "src/*.cpp")
add_executable(my_project ${SOURCES})
