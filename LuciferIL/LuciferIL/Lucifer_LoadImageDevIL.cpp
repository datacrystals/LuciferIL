//-----------------------//
// Lucifer Image Library //
// Thomas Liao (2022)    //
//-----------------------//

#include <Lucifer_LoadImageDevIL.h>

namespace Lucifer {

LoadingStatus Lucifer_LoadDevIL(unsigned char* ImageData, unsigned long Size, Image& Image, int MaxChannels) {

    if (ImageData == nullptr) {
        return Lucifer_LoadingStatus_InvalidData;
    }

    // Setup Image IDs
    ILuint DevILImageID;
    ilGenImages(1, &DevILImageID);
    ilBindIage(&DevILImageID);

    // Loa d Image
    ilLoadL(unsigned char, ImageData, Size);

    // Unload And Destroy Image
    ilBindImage(0);
    ilDeleteImage(DevilImageID);


    // FIMEMORY* FIImageData = FreeImage_OpenMemory(ImageData, Size);
    // FREE_IMAGE_FORMAT Format = FreeImage_GetFileTypeFromMemory(FIImageData);

    // if (Format == FIF_UNKNOWN) {
    //     FreeImage_CloseMemory(FIImageData);
    //     return Lucifer_LoadingStatus_UnsupportedFormat;
    // }


    // FIBITMAP* FIImage = FreeImage_LoadFromMemory(Format, FIImageData);
    // FreeImage_CloseMemory(FIImageData);

    // int Width, Height, Line;
    // Width  = FreeImage_GetWidth(FIImage);
    // Height = FreeImage_GetHeight(FIImage);
    // Line  = FreeImage_GetLine(FIImage);

    // if (FIImage == nullptr) {
    //     return Lucifer_LoadingStatus_UnsupportedFormat;
    // }    

    // Image.Bytes.reset(new unsigned char[FreeImage_GetMemorySize(FIImage)]);
    // memcpy(Image.Bytes.get(), FreeImage_GetBits(FIImage), FreeImage_GetMemorySize(FIImage));

    // Image.Width = Width;
    // Image.Height = Height;

    // if (Image.Width < 1) {
    //     FreeImage_Unload(FIImage);
    //     return Lucifer_LoadingStatus_InvalidWidth;
    // } else if (Image.Height < 1) {
    //     FreeImage_Unload(FIImage);
    //     return Lucifer_LoadingStatus_InvalidHeight;
    // }

    // Image.Channels = Line / Width;

    // if (Image.Channels < 1 || Image.Channels > MaxChannels) {
    //     FreeImage_Unload(FIImage);
    //     return Lucifer_LoadingStatus_InvalidNumChannels;
    // }

    // FreeImage_Unload(FIImage);
    // return Lucifer_LoadingStatus_Complete;

}

}