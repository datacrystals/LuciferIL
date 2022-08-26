cmake_minimum_required(VERSION 3.5)
project(Lucifer)


# Include Libs
include(${PROJECT_SOURCE_DIR}/CMake/DisableTargetWarnings.cmake)
include(${PROJECT_SOURCE_DIR}/CMake/FreeImage.cmake)
include(${PROJECT_SOURCE_DIR}/CMake/DevIL.cmake)



# Setup Library Target
add_library(Lucifer

    "LuciferIL/Lucifer.cpp"
    "LuciferIL/Lucifer_STBLoadImage.cpp"
    "LuciferIL/Lucifer_FreeImageLoadImage.cpp"

    "LuciferIL/Lucifer_LoadingStatusEnum.cpp"
    
    "LuciferIL/Lucifer_ImageStruct.cpp"
    
    "LuciferIL/Lucifer_EnumToString.cpp"
    "LuciferIL/Lucifer_EnumToLogLevel.cpp"
    


    "LuciferIL/Lucifer.h"
    "LuciferIL/Lucifer_STBLoadImage.h"
    "LuciferIL/Lucifer_FreeImageLoadImage.h"
    
    "LuciferIL/Lucifer_LoadingStatusEnum.h"
    
    "LuciferIL/Lucifer_ImageStruct.h"
    
    "LuciferIL/Lucifer_EnumToString.h"
    "LuciferIL/Lucifer_EnumToLogLevel.h"

)
target_include_directories(Lucifer
    PUBLIC
        ${PROJECT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/stb

    PRIVATE
        ${PROJECT_SOURCE_DIR}/LuciferIL
        ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/stb
)


target_link_libraries(Lucifer FreeImage)
target_link_libraries(Lucifer IL)