//---------------------------//
// New Image Library (Lucifer) //
// Thomas Liao (2022)        //
//---------------------------//

#include <LuciferIL/Lucifer_STBLoadImage.h>

namespace Lucifer {

LoadingStatus Lucifer_STBLoad(unsigned char* ImageData, unsigned long Size, Image& Image, int MaxChannels) {

    if (ImageData == nullptr) {
        return Lucifer_LoadingStatus_InvalidData;
    }

    int Width, Height, Channels;
    unsigned char* ImageBytes = stbi_load_from_memory(ImageData, Size, &Width, &Height, &Channels, 0);
    if (Image.Bytes == nullptr) {
        std::string FailReason = std::string(stbi_failure_reason());
        std::cout<<FailReason<<"\n";
        return Lucifer_LoadingStatus_UnsupportedFormat;
    }

    unsigned long ImageLength = strlen((const char*)ImageBytes);
    Image.Bytes.reset(new unsigned char[ImageLength]);
    memcpy(Image.Bytes.get(), ImageBytes, ImageLength);

    Image.Width = Width;
    Image.Height = Height;
    Image.Channels = Channels;

    stbi_image_free(ImageBytes);
    

    if (Image.Width < 1) {
        return Lucifer_LoadingStatus_InvalidWidth;
    } else if (Image.Height < 1) {
        return Lucifer_LoadingStatus_InvalidHeight;
    } else if (Image.Channels < 1 || Image.Channels > MaxChannels) {
        return Lucifer_LoadingStatus_InvalidNumChannels;
    }
    return Lucifer_LoadingStatus_Complete;

}

}