
cmake_minimum_required(VERSION 3.5)
project(NeoIL)


# Configuration Options
option(ENABLE_STB       "Enable or disable the use of STB_Image" ON)
option(ENABLE_FREEIMAGE "Enable or disable the use of FreeImage" ON)
option(ENABLE_DEVIL     "Enable or disable the use of DevIL"     ON)



# Include Image Libs
if (Enable_STB)
    include(CMake/STB.cmake)
endif()
if (ENABLE_FREEIMAGE)
    include(CMake/FreeImage.cmake)
endif()
if (Enable_DEVIL)
    include(CMake/DevIL.cmake)
endif()



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