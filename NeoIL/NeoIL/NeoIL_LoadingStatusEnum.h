//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once


namespace NeoIL {


enum LoadingStatus {
    NeoIL_LoadingStatus_Complete,
    NeoIL_LoadingStatus_InvalidData,
    NeoIL_LoadingStatus_UnsupportedFormat,
    NeoIL_LoadingStatus_InvalidNumChannels,
    NeoIL_LoadingStatus_InvalidWidth,
    NeoIL_LoadingStatus_InvalidHeight, 
    NeoIL_LoadingStatus_UnknownError
};


};