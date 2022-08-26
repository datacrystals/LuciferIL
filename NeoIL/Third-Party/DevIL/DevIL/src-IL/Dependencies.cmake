# LibPNG
message("Setting Up LibPNG For DevIL")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/LibPNG)
set(PNG_DEP_FILES
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
add_library(PNG_DEPS SHARED ${PNG_DEP_FILES})
target_link_libraries(IL PNG_DEPS)
set(PNG_FOUND 1)

message("Completed Setting Up LibPNG For DevIL")


# LibTiff

message("Setting Up LibTIFF For DevIL")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Third-Party/LibTIFF4)
set(TIFF_DEP_FILES
    Third-Party/LibTIFF4/tif_aux.c
    Third-Party/LibTIFF4/tif_close.c
    Third-Party/LibTIFF4/tif_codec.c
    Third-Party/LibTIFF4/tif_color.c
    Third-Party/LibTIFF4/tif_compress.c
    Third-Party/LibTIFF4/tif_dir.c
    Third-Party/LibTIFF4/tif_dirinfo.c
    Third-Party/LibTIFF4/tif_dirread.c
    Third-Party/LibTIFF4/tif_dirwrite.c
    Third-Party/LibTIFF4/tif_dumpmode.c
    Third-Party/LibTIFF4/tif_error.c
    Third-Party/LibTIFF4/tif_extension.c
    Third-Party/LibTIFF4/tif_fax3.c
    Third-Party/LibTIFF4/tif_fax3sm.c
    Third-Party/LibTIFF4/tif_flush.c
    Third-Party/LibTIFF4/tif_getimage.c
    Third-Party/LibTIFF4/tif_jpeg.c
    Third-Party/LibTIFF4/tif_luv.c
    Third-Party/LibTIFF4/tif_lzma.c
    Third-Party/LibTIFF4/tif_lzw.c
    Third-Party/LibTIFF4/tif_next.c
    Third-Party/LibTIFF4/tif_ojpeg.c
    Third-Party/LibTIFF4/tif_open.c
    Third-Party/LibTIFF4/tif_packbits.c
    Third-Party/LibTIFF4/tif_pixarlog.c
    Third-Party/LibTIFF4/tif_predict.c
    Third-Party/LibTIFF4/tif_print.c
    Third-Party/LibTIFF4/tif_read.c
    Third-Party/LibTIFF4/tif_strip.c
    Third-Party/LibTIFF4/tif_swab.c
    Third-Party/LibTIFF4/tif_thunder.c
    Third-Party/LibTIFF4/tif_tile.c
    Third-Party/LibTIFF4/tif_version.c
    Third-Party/LibTIFF4/tif_warning.c
    Third-Party/LibTIFF4/tif_write.c
    Third-Party/LibTIFF4/tif_zip.c
)
add_library(TIFF_DEPS SHARED ${TIFF_DEP_FILES})
target_link_libraries(IL TIFF_DEPS)
set(TIFF_FOUND 1)

message("Completed Setting Up LibTIFF For DevIL")



