cmake_minimum_required(VERSION 3.19)
project(Dragon)

set(CMAKE_CXX_STANDARD 17)


add_executable(Dragon main.cpp include/allvariables.h include/register.h include/register.cpp include/random.cpp
        include/random.h include/data_operate.cpp include/data_operate.h include/jsonxx/json.hpp)