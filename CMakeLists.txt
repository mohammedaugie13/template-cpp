cmake_minimum_required(VERSION 3.25)
project(stack_test)

set(CMAKE_CXX_STANDARD 14)

#include_directories(.)
#include_directories(chapter2)
#include_directories(chapter2/include)
#
#add_executable(template_cpp
#        chapter2/include/stack1.hpp
#        chapter2/src/main.cpp)

set(
        SOURCES
        chapter2/src/main.cpp
)

add_executable(
        stacktest ${SOURCES}
)

target_include_directories(
        stacktest
        PRIVATE
        chapter2/include/stack1.hpp
        chapter2/include/stack2.hpp
        chapter2/include/stack3.hpp
        chapter2/include/shatckpartspec.hpp
)