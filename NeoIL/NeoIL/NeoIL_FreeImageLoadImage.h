//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once


// Standard Libs
#include <iostream>
#include <string>
#include <memory>

// External Libs
#include <FreeImage.h>

// Internal Libs
#include <NeoIL/NeoIL_LoadingStatusEnum.h>
#include <NeoIL/NeoIL_ImageStruct.h>


namespace NeoIL {


/**
 * @brief Decodes image data in-memory.
 * 
 * @param ImageData Pointer to raw bytes (these could be read directly off of the disk)
 * @param Size Size of the array
 * @param Image Reference to the image to be updated
 * @param MaxChannels Maximum number of supported channels, defaults to 4
 * @return NeoIL::LoadingStatus Status of loading
 */
LoadingStatus NeoIL_FreeImageLoad(unsigned char* ImageData, unsigned long Size, Image& Image, int MaxChannels = 4);





};