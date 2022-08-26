//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once


namespace NeoIL {


struct Image {

private:

public:

    int Width  = -1; /**<Width in pixels of the image*/
    int Height = -1; /**<Height in pixels of the image*/
    int Channels = -1; /**<Number of channels that the image has (RGB would be 3, RGBA is 4, etc...)*/

    unsigned long Size; /**<Number Of Bytes In Image Data*/
    unsigned char* ImageData; /**<Pointer to bytes containing the image data*/

};


};