cmake_minimum_required(VERSION 3.15)
project(BoostExample)

set(CMAKE_CXX_STANDARD 14)
set(BOOST_ROOT "C:Programas;Librerias C++;boost_1_83_0")

find_package(Boost 1.75.0)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(BoostExample main.cpp)
    target_link_libraries(BoostExample ${Boost_LIBRARIES})
endif()