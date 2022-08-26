//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once

#include <iostream>

#ifndef STB_IMAGE_IMPLEMENTATION
    #define STB_IMAGE_IMPLEMENTATION
#endif
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