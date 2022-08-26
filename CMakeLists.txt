
cmake_minimum_required(VERSION 3.5)
project(NeoIL)


# Include Image Libs
include(${CMAKE_BUILD_UTILS_DIR}/STB.cmake)
include(${CMAKE_BUILD_UTILS_DIR}/FreeImage.cmake)
include(${CMAKE_BUILD_UTILS_DIR}/DevIL.cmake)

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