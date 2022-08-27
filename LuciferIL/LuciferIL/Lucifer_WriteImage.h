//-----------------------//
// Lucifer Image Library //
// Thomas Liao (2022)    //
//-----------------------//

#pragma once


// Standard Libs
#include <iostream>
#include <memory>
#include <cstring>

// Internal Libs

#include <LuciferIL/Lucifer_WritingStatusEnum.h>
#include <LuciferIL/Lucifer_ImageStruct.h>


namespace Lucifer {


WritingStatus Lucifer_Write(Image& Image, std::unique_ptr<unsigned char> CompressedImageData, ImageFormat Format = Lucifer_ImageFormat_PNG,
);


};