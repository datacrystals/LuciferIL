
cmake_minimum_required(VERSION 3.5)
project(NeoIL)

add_library(NeoIL

    "NeoIL/SetThreadName.cpp"
    "NeoIL/GetThreadName.cpp"
    
    "NeoIL/SetThreadName.h"
    "NeoIL/GetThreadName.h"

)

target_include_directories(NeoIL
    PUBLIC
        ${PROJECT_SOURCE_DIR}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/NeoIL
)