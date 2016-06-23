cmake_minimum_required (VERSION 2.6)
project (mavlink-encoder)


include_directories(include)

set(CMAKE_C_FLAGS "-std=c99")

file(GLOB SOURCES "src/*.c")

add_executable(main ${SOURCES})

