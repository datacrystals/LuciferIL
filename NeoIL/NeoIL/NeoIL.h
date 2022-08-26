//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once

// Std Lib
#include <iostream>

// Internal Lib
#include <NeoIL/NeoIL_STBLoadImage.h>
#include <NeoIL/NeoIL_FreeImageLoadImage.h>

// Third-Party Lib
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include <FreeImage.h>


namespace NeoIL {


class NeoIL {

private:



public:

    /**
     * @brief Create new NeoIL instance, automatically initializes all required image loader functions.
     * 
     */
    NeoIL();

    /**
     * @brief Shut down and destroy the NeoIL Instance.
     * 
     */
    ~NeoIL();


};


};