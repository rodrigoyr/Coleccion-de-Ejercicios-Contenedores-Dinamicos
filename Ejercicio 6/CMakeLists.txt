cmake_minimum_required(VERSION 3.26)
project(Ejercicio_6)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories("C:/Programas/Librerias C++/json11-master")
include_directories("C:/Programas/Librerias C++/json-lib")

set(JSON11_SOURCES "C:/Programas/Librerias C++/json11-master/json11.cpp")
set(JSON_LIB_SOURCES "C:/Programas/Librerias C++/json-lib/tus_archivos_json_lib.cpp")

add_library(json11 STATIC ${JSON11_SOURCES})
add_library(json-lib STATIC ${JSON_LIB_SOURCES})

add_executable(Ejercicio_6 main.cpp)

target_link_libraries(Ejercicio_6 json11 json-lib)
