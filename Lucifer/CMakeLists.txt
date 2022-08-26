cmake_minimum_required(VERSION 3.5)
project(Lucifer)


# Include Libs
include(${PROJECT_SOURCE_DIR}/CMake/DisableTargetWarnings.cmake)
include(${PROJECT_SOURCE_DIR}/CMake/FreeImage.cmake)
include(${PROJECT_SOURCE_DIR}/CMake/DevIL.cmake)



# Setup Library Target
add_library(Lucifer

    "Lucifer/Lucifer.cpp"
    "Lucifer/Lucifer_STBLoadImage.cpp"
    "Lucifer/Lucifer_FreeImageLoadImage.cpp"

    "Lucifer/Lucifer_LoadingStatusEnum.cpp"
    
    "Lucifer/Lucifer_ImageStruct.cpp"
    
    "Lucifer/Lucifer_EnumToString.cpp"
    "Lucifer/Lucifer_EnumToLogLevel.cpp"
    


    "Lucifer/Lucifer.h"
    "Lucifer/Lucifer_STBLoadImage.h"
    "Lucifer/Lucifer_FreeImageLoadImage.h"
    
    "Lucifer/Lucifer_LoadingStatusEnum.h"
    
    "Lucifer/Lucifer_ImageStruct.h"
    
    "Lucifer/Lucifer_EnumToString.h"
    "Lucifer/Lucifer_EnumToLogLevel.h"

)
target_include_directories(Lucifer
    PUBLIC
        ${PROJECT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/stb

    PRIVATE
        ${PROJECT_SOURCE_DIR}/Lucifer
        ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/stb
)


target_link_libraries(Lucifer FreeImage)
target_link_libraries(Lucifer IL)