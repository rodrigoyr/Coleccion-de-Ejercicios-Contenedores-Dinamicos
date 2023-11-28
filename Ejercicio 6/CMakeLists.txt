cmake_minimum_required(VERSION 3.26)
project(Ejercicio_6)

set(CMAKE_CXX_STANDARD 17)
set(BOOST_ROOT "C:\Programas\Librerias C++\boost_1_83_0")

find_package(Boost 1.75.0)

add_executable(Ejercicio_6 main.cpp)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(Ejercicio_6 main.cpp)
    target_link_libraries(BoostExample ${Boost_LIBRARIES})
endif()

