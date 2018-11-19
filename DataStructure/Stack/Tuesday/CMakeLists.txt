cmake_minimum_required(VERSION 3.12)
project(Tuesday C)

set(CMAKE_C_STANDARD 99)

add_executable(Tuesday InfixCalculatorMain.c InfixCalculator.h InfixCalculator.c PostCalculator.h PostCalculator.c InfixToPostfix.h InfixToPostfix.c ListBaseStack.h ListBaseStack.c)