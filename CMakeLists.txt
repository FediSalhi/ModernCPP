cmake_minimum_required(VERSION 3.23)
project(ModernCPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(ModernCPP main.cpp Smart_Pointers.cpp Smart_Pointers.h Auto_Keyword.cpp Auto_Keyword.h Range_Based_For_Loops.cpp Range_Based_For_Loops.h Structured_Binding.cpp Structured_Binding.h Lvalue_Rvalue.cpp Lvalue_Rvalue.h Initialization_In_Class_Declaration.cpp Initialization_In_Class_Declaration.h Move_Semantics.cpp Move_Semantics.h Defaulted_Deleted.cpp Defaulted_Deleted.h Final_Class.cpp Final_Class.h Override.cpp Override.h List_Initialization.cpp List_Initialization.h Threading.cpp Threading.h Constexpr.cpp Constexpr.h Lambda.cpp Lambda.h)

target_link_libraries( ModernCPP pthread)