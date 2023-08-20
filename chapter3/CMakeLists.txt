cmake_minimum_required(VERSION 3.25)
project(stack_test)

set(CMAKE_CXX_STANDARD 17)



set(
        SOURCES
        src/main.cpp
        include/stacknontype.hpp include/stackauto.hpp)

add_executable(
        stacknontype ${SOURCES}
)

target_include_directories(
        stacknontype
        PRIVATE
        include/stacknontype.hpp
        include/stackauto.hpp
)
