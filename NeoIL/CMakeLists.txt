cmake_minimum_required(VERSION 3.5)
project(NeoIL)


# Include Libs
include(${PROJECT_SOURCE_DIR}/CMake/DisableTargetWarnings.cmake)
include(${PROJECT_SOURCE_DIR}/CMake/FreeImage.cmake)
include(${PROJECT_SOURCE_DIR}/CMake/DevIL.cmake)



# Setup Library Target
add_library(NeoIL

    "NeoIL/NeoIL.cpp"
    "NeoIL/NeoIL_STBLoadImage.cpp"

    "NeoIL/NeoIL_LoadingStatusEnum.cpp"
    
    "NeoIL/NeoIL_ImageStruct.cpp"
    
    "NeoIL/NeoIL_EnumToString.cpp"
    "NeoIL/NeoIL_EnumToLogLevel.cpp"
    


    "NeoIL/NeoIL.h"
    "NeoIL/NeoIL_STBLoadImage.h"
    
    "NeoIL/NeoIL_LoadingStatusEnum.h"
    
    "NeoIL/NeoIL_ImageStruct.h"
    
    "NeoIL/NeoIL_EnumToString.h"
    "NeoIL/NeoIL_EnumToLogLevel.h"

)
target_include_directories(NeoIL
    PUBLIC
        ${PROJECT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/stb

    PRIVATE
        ${PROJECT_SOURCE_DIR}/NeoIL
        ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/stb
)


target_link_libraries(NeoIL FreeImage)
target_link_libraries(NeoIL IL)