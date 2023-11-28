cmake_minimum_required(VERSION 3.26)
project(Ejercicio_6)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicio_6 main.cpp)

include_directories(include json11-master)

add_library(json11 STATIC "C:\Programas\Librerias C++\json11-master")

target_link_libraries(Ejercicio_6 json11)
