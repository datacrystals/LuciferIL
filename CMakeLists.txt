
cmake_minimum_required(VERSION 3.5)
project(NeoIL)


# Define CMake Paths
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Third-Party")
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Source")
set(BIN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Binaries")


# Include Image Libs
include(CMake/STB.cmake)
include(CMake/FreeImage.cmake)
include(CMake/DevIL.cmake)


# Setup Library Target
add_library(NeoIL

    "NeoIL/NeoIL.cpp"
    "NeoIL/NeoIL.h"

)
target_include_directories(NeoIL
    PUBLIC
        ${PROJECT_SOURCE_DIR}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/NeoIL
)

target_link_libraries(NeoIL FreeImage)