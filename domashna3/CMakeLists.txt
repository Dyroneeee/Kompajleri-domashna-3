cmake_minimum_required(VERSION 2.8.9)
project(domashna)

#ova gi implementira site .h file-ovi vo proektot
include_directories(include)

#ova gi alocite site source file-ovi vo promenliva sources
file(GLOB SOURCES "src/*.c")

#a ova go kreira makefile-ot za proektot
add_executable(testStudent ${SOURCES})
