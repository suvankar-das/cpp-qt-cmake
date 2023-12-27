cmake_minimum_required(VERSION 3.5)

project(PlainCppOop LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PlainCppOop main.cpp
    Rectangle.h
    Box.h
    Reactangle.cpp
    Box.cpp)

include(GNUInstallDirs)
install(TARGETS PlainCppOop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
