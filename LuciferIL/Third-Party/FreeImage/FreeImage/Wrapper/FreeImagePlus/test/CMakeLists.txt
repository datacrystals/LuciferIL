cmake_minimum_required(VERSION 3.16.2)
project(FreeImagePlusTest VERSION 3.18.0)

file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set(${PROJECT_NAME}_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME} PRIVATE ${${PROJECT_NAME}_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE FreeImagePlus)
add_dependencies(${PROJECT_NAME} FreeImagePlus)

# copy the test data
set(${PROJECT_NAME}_TESTDATA_DIR ${CMAKE_CURRENT_SOURCE_DIR})
# Destination Path are different on Windows and Linux
if(WIN32)
	set(DIST "${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/")
else()
	set(DIST "${CMAKE_CURRENT_BINARY_DIR}/")
endif()

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
				   COMMAND ${CMAKE_COMMAND} -E copy
				   		   "${${PROJECT_NAME}_TESTDATA_DIR}/test.jpg"
						   "${${PROJECT_NAME}_TESTDATA_DIR}/test.tif"
   						   "${DIST}")

# Copying dependent DLLs to executable directory after building the target on Windows
if(MSVC)
	add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
					   COMMAND ${CMAKE_COMMAND} -E copy
							  "${FreeImage_BINARY_DIR}/$<CONFIG>/FreeImage$<$<CONFIG:Debug>:d>.dll"
							  "${FreeImagePlus_BINARY_DIR}/$<CONFIG>/FreeImagePlus$<$<CONFIG:Debug>:d>.dll"
							  "${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/")
endif(MSVC)
