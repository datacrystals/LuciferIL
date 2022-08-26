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
    ilBindImage(DevILImageID);

    // Load Image
    ILenum ImageFormat = ilDetermineTypeL(ImageData, Size);
    if (ImageFormat == IL_TYPE_UNKNOWN) {
        return Lucifer_LoadingStatus_UnsupportedFormat;
    }
    ilLoadL(ImageFormat, ImageData, Size);

    
    // Get Image Metadata
    Image.Width    = ilGetInteger(IL_IMAGE_WIDTH);
    Image.Height   = ilGetInteger(IL_IMAGE_HEIGHT);
    Image.Channels = ilGetInteger(IL_IMAGE_CHANNELS);

    if (Image.Width < 1) {
        ilDeleteImage(DevILImageID);
        return Lucifer_LoadingStatus_InvalidWidth;
    } else if (Image.Height < 1) {
        ilDeleteImage(DevILImageID);
        return Lucifer_LoadingStatus_InvalidHeight;
    }
    if (Image.Channels < 1 || Image.Channels > MaxChannels) {
        ilDeleteImage(DevILImageID);
        return Lucifer_LoadingStatus_InvalidNumChannels;
    }



    // Memcpy Image Data Pointer
    
    // if (FIImage == nullptr) {
    //     return Lucifer_LoadingStatus_UnsupportedFormat;
    // }    

    // Image.Bytes.reset(new unsigned char[FreeImage_GetMemorySize(FIImage)]);
    // memcpy(Image.Bytes.get(), FreeImage_GetBits(FIImage), FreeImage_GetMemorySize(FIImage));







    // FreeImage_Unload(FIImage);






    // Unload And Destroy Image
    ilBindImage(0);
    ilDeleteImage(DevILImageID);

    return Lucifer_LoadingStatus_Complete;

}

}