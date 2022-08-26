//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once


namespace NeoIL {


enum LoadingStatus {
    NeoIL_ImageLoad_Complete,
    NeoIL_ImageLoad_InvalidData,
    NeoIL_ImageLoad_UnsupportedFormat,
    NeoIL_ImageLoad_InvalidNumChannels,
    NeoIL_ImageLoad_InvalidWidth,
    NeoIL_ImageLoad_InvalidHeight, 
    NeoIL_ImageLoad_UnknownError
};


};