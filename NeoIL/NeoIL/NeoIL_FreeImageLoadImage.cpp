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
    FIBITMAP* FIImage = FreeImage_LoadFromMemory(Format, FIImageData);
    FreeImage_CloseMemory(FIImageData);


    if (FIBITMAP == nullptr) {
        return NeoIL::NeoIL_LoadingStatus_UnsupportedFormat;
    }    

    Image.Bytes.reset(new unsigned char[FreeImage_GetMemorySize(FIImage)]);
    memcpy(Image.Bytes.get(), FreeImage_GetBits(FIImage), FreeImage_GetMemorySize(FIImage));

    Image.Width = FreeImage_GetWidth(FIImage);
    Image.Height = FreeImage_GetHeight(FIImage);

    if (Image.Width < 1) {
        return NeoIL::NeoIL_LoadingStatus_InvalidWidth;
    } else if (Image.Height < 1) {
        return NeoIL::NeoIL_LoadingStatus_InvalidHeight;
    }

    Image.Channels = FreeImage_GetLine(FIImage) / FreeImage_GetWidth(FIImage);

    if (Image.Channels < 1 || Image.Channels > MaxChannels) {
        return NeoIL::NeoIL_LoadingStatus_InvalidNumChannels;
    }

    return NeoIL::NeoIL_LoadingStatus_Complete;

}