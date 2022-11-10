cmake_minimum_required(VERSION 3.5)

project(parcial LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(parcial main.cpp empleado.h empleado.cpp empresa.cpp empresa.h)
