//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#include <NeoIL_STBLoadImage.h>

NeoIL::LoadingStatus NeoIL_STBLoad(unsigned char* ImageData, unsigned long Size, NeoIL::Image& Image, int MaxChannels) {

    if (ImageData == nullptr) {
        return NeoIL::NeoIL_LoadingStatus_InvalidData;
    }

    int Width, Height, Channels;
    unsigned char* ImageBytes = stbi_load_from_memory(ImageData, Size, &Width, &Height, &Channels, 0);
    Image.Bytes = std::make_unique<unsigned char>(ImageBytes);
    Image.Width = Width;
    Image.Height = Height;
    Image.Channels = Channels;

    if (Image.Bytes == nullptr) {
        return NeoIL::NeoIL_LoadingStatus_UnsupportedFormat;
    } else if (Image.Width < 1) {
        return NeoIL::NeoIL_LoadingStatus_InvalidWidth;
    } else if (Image.Height < 1) {
        return NeoIL::NeoIL_LoadingStatus_InvalidHeight;
    } else if (Image.Channels < 1 || Image.Channels > MaxChannels) {
        return NeoIL::NeoIL_LoadingStatus_InvalidNumChannels;
    }

}