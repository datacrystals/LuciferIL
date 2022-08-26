# LibPNG
message("Setting Up LibPNG For DevIL")

include_directories(Third-Party/libpng)

add_subdirectory(Third-Party/libpng)
target_include_directories(png PRIVATE Third-Party/libpng)

set(PNG_FOUND 1)
