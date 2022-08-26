cmake_minimum_required(VERSION 3.5)
project(NeoIL)


# Include Image Libs
include(${PROJECT_SOURCE_DIR}CMake/STB.cmake)
include(${PROJECT_SOURCE_DIR}CMake/FreeImage.cmake)
include(${PROJECT_SOURCE_DIR}CMake/DevIL.cmake)



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


target_link_libraries(NeoIL STB)
target_link_libraries(NeoIL FreeImage)
target_link_libraries(NeoIL DevIL)