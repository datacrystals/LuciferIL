//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#include <NeoIL_EnumToString.h>



int NeoIL::NeoIL_GetLoadingStatusLevel(NeoIL::LoadingStatus Status) {

    if (Status == NeoIL_LoadingStatus_Complete) {
        return 0;
    } else if (Status == NeoIL_LoadingStatus_InvalidData) {
        return 3;
    } else if (Status == NeoIL_LoadingStatus_InvalidHeight) {
        return 1;
    } else if (Status == NeoIL_LoadingStatus_InvalidNumChannels) {
        return 2;
    } else if (Status == NeoIL_LoadingStatus_InvalidWidth) {
        return 1;
    } else if (Status == NeoIL_LoadingStatus_UnsupportedFormat) {
        return 1;
    } else if (Status == NeoIL_LoadingStatus_UnknownError) {
        return 4;
    }

    return -1;

}