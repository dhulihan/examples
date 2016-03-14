cmake_minimum_required(VERSION 2.6)
project(SIMPLE)

set(CMAKE_CXX_FLAG "-g -Wall")

set(SOURCES
	main.cpp
	externalClass.cpp)

set(CMAKE_EXECUTABLE_SUFFIX "")

add_executable(simple ${SOURCES})
