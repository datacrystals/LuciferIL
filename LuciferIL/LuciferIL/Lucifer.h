//---------------------------//
// New Image Library (Lucifer) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once

// Std Lib
#include <iostream>

// Internal Lib
#include <LuciferIL/Lucifer_STBLoadImage.h>
#include <LuciferIL/Lucifer_FreeImageLoadImage.h>

// Third-Party Lib
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include <FreeImage.h>


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


};


};