# LibPNG
message("Setting Up LibPNG For DevIL")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/libpng)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/libpng)

target_include_directories(png PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/libpng)

set(PNG_FOUND 1)

message("Completed Setting Up LibPNG For DevIL")

