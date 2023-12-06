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
        cPlusPlusConditionalStatement/ConditionalStatement.cpp
        cPlusPlusLoop/cPlusPlusLoop.cpp
        cPlusPlusLoop/cPlusPlusLoop.h
        cPlusPlusControlFlow/cPlusPlusControlFlow.cpp
        cPlusPlusPointer/cPlusPlusPointer.cpp
        init.h
        cPlusPlusQuote/cPlusPlusQuote.cpp
        cPlusPlusClass/cPlusPlusClass.cpp
        cPlusPlusStaticPropertiesOfClass/cPlusPlusStaticPropertiesOfClass.cpp
        cPlusPlusEnums/cPlusPlusEnums.cpp
        cPlusPlusConstructor/cPlusPlusConstructor.cpp
        cPlusPlusExtends/cPlusPlusExtends.cpp
        cPlusPlusVoidFunction/cPlusPlusVoidFunction.cpp
        cPlusPlusVisibility/cPlusPlusVisibility.cpp
        CplusPlusArray/index.cpp
        cPlusPlusString/index.cpp
        cPlusPlusConst/index.cpp
        cPlusPlusMemberInitList/index.cpp
        cPlusPlusTernaryOperator/index.cpp
        cPlusPlusCreateAndInitCplusPlusObject/index.cpp
        cPlusPlusNewKeyWord/index.cpp
        cPlusPlusImplicitConversion/index.cpp
        cPlusPlusOperatorsAndOverLoad/index.cpp
        cPlusPlusThisKeyWords/index.cpp
        cPlusPlusObjectLifeCycle/index.cpp
        cPlusPlusCopyConstructor/index.cpp
        cPlusPlusArrowOperator/index.cpp
        cPlusPlusDynamicArray/index.cpp
        cPlusPlusTemplate/index.cpp
)