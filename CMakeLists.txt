cmake_minimum_required(VERSION 3.26)
project(cPlusPlus)

set(CMAKE_CXX_STANDARD 17)

add_executable(cPlusPlus main.cpp
        howCompilerWork/compiler.cpp
        howCompilerWork/compiler.h
        howDoeLinkerWork/linker.cpp
        cPlusPlusVariable/variable.cpp
        cPlusPlusFunction/cPlusPlusFunction.cpp
        cPlusPlusHeadFile/cPLusPlusHead.h
        cPlusPlusConditionalStatement/ConditionalStatement.cpp)