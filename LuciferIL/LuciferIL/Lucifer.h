//-----------------------//
// Lucifer Image Library //
// Thomas Liao (2022)    //
//-----------------------//

#pragma once

// Std Lib
#include <iostream>

// Internal Lib
#include <LuciferIL/Lucifer_LoadImage.h>


// Third-Party Lib
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include <FreeImage.h>
#include <IL/il.h>


namespace Lucifer {


class Lucifer {

private:



public:

    /**
     * @brief Create new Lucifer instance, automatically initializes all required image loader functions.
     * 
     */
    Lucifer();

    /**
     * @brief Shut down and destroy the Lucifer Instance.
     * 
     */
    ~Lucifer();


    /**
     * @brief Decodes image data in-memory.
     * 
     * @param ImageData Pointer to raw bytes (these could be read directly off of the disk)
     * @param Size Size of the array
     * @param Image Reference to the image to be updated
     * @param MaxChannels Maximum number of supported channels, defaults to 4
     * @return Lucifer::LoadingStatus Status of loading
     */
    LoadingStatus Load(unsigned char* ImageData, unsigned long Size, Image& Image, int MaxChannels = 4);



};


};