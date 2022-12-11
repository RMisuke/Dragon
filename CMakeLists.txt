cmake_minimum_required(VERSION 3.19)
project(Dragon)

set(CMAKE_CXX_STANDARD 17)


add_executable(Dragon main.cpp include/allvariables.h include/register.h include/register.cpp include/random.cpp
        include/random.h include/json_writer.cpp include/json.h include/json_reader.cpp include/json_value.cpp
        include/data_operate.cpp include/data_operate.h)