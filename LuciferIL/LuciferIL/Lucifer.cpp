//-----------------------//
// Lucifer Image Library //
// Thomas Liao (2022)    //
//-----------------------//

#include <Lucifer.h>



namespace Lucifer {

Lucifer::Lucifer() {

    FreeImage_Initialise();
    ilInit();

}

Lucifer::~Lucifer() {

    FreeImage_DeInitialise();

}


LoadingStatus Lucifer::Load(unsigned char* ImageData, unsigned long Size, Image& Image, int MaxChannels) {
    return Lucifer_Load(ImageData, Size, Image, MaxChannels);
}



}