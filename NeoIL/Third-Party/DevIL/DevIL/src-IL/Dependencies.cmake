# LibPNG
message("Setting Up LibPNG For DevIL")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/LibPNG)
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/LibPNG)

#target_include_directories(png PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/LibPNG)

set(DEVIL_DEP_FILES
    Third-Party/LibPNG/png.c
    Third-Party/LibPNG/pngerror.c
    Third-Party/LibPNG/pngget.c 
    Third-Party/LibPNG/pngmem.c 
    Third-Party/LibPNG/pngpread.c 
    Third-Party/LibPNG/pngread.c 
    Third-Party/LibPNG/pngrio.c 
    Third-Party/LibPNG/pngrtran.c 
    Third-Party/LibPNG/pngrutil.c
    Third-Party/LibPNG/pngset.c
    Third-Party/LibPNG/pngtrans.c
    Third-Party/LibPNG/pngwio.c
    Third-Party/LibPNG/pngwrite.c
    Third-Party/LibPNG/pngwtran.c
    Third-Party/LibPNG/pngwutil.c
)
add_library(DEVIL_DEPENDENCIES SHARED ${DEVIL_DEP_FILES})
target_link_libraries(IL DEVIL_DEPENDENCIES)

set(PNG_FOUND 1)

message("Completed Setting Up LibPNG For DevIL")

