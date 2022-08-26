cmake_minimum_required(VERSION 3.5)
project(
	"NeoIL-CompileTest"
	VERSION "1.0.0"
	LANGUAGES CXX
	)


# Define CMake Paths
set(BIN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Binaries")

# Set Binary Dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BIN_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BIN_DIR})

foreach( OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES} )
    string( TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG )
    set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${BIN_DIR} )
    set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${BIN_DIR} )
    set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${BIN_DIR} )
endforeach( OUTPUTCONFIG CMAKE_CONFIGURATION_TYPES )

set(CMAKE_INSTALL_PREFIX ${BIN_DIR})

# Include NeoIL
get_filename_component(PARENT_DIR ../../NeoIL/ ABSOLUTE)
include_directories(${PARENT_DIR})


# Build Executable
add_executable(${ProjectName} Main.cpp)
target_link_libraries(${ProjectName} NeoIL)