//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#include <NeoIL_FreeImageLoadImage.h>

NeoIL::LoadingStatus NeoIL_FreeImageLoad(unsigned char* ImageData, unsigned long Size, NeoIL::Image& Image, int MaxChannels) {

    if (ImageData == nullptr) {
        return NeoIL::NeoIL_LoadingStatus_InvalidData;
    }

    FIMEMORY* FIImageData = FreeImage_OpenMemory(ImageData, Size);
    FREE_IMAGE_FORMAT Format = FreeImage_GetFileTypeFromMemory(FIImageData);
    FIBITMAP* Image = FreeImage_LoadFromMemory(Format, FIImageData);
    FreeImage_CloseMemory(FIImageData);

    
    int Width, Height, Channels;
    Image.Bytes = std::make_unique<unsigned char*>(ImageBytes);
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
    return NeoIL::NeoIL_LoadingStatus_Complete;

}