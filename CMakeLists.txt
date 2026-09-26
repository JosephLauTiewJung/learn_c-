cmake_minimum_required(VERSION 4.3)
project(learn_c__)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(learn_c__
        source/greeting.cpp
        source/command_line_receipt_tracker.cpp
        source/main.cpp)
