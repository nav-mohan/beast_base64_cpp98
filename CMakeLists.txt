cmake_minimum_required(VERSION 3.10)

project(Base64Example VERSION 1.0)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_compile_options("-std=c++98")  # Sometime the CMAKE_CXX_STANDARD does not work
add_compile_options("-g")

add_executable(base64-encode base64-encode.cpp)
