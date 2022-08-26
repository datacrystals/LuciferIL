//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#include <NeoIL_EnumToString.h>

namespace NeoIL {

std::string NeoIL_GetLoadingStatusString(LoadingStatus Status) {

    if (Status == NeoIL_LoadingStatus_Complete) {
        return "NeoIL_LoadingStatus_Complete";
    } else if (Status == NeoIL_LoadingStatus_InvalidData) {
        return "NeoIL_LoadingStatus_InvalidData";
    } else if (Status == NeoIL_LoadingStatus_InvalidHeight) {
        return "NeoIL_LoadingStatus_InvalidHeight";
    } else if (Status == NeoIL_LoadingStatus_InvalidNumChannels) {
        return "NeoIL_LoadingStatus_InvalidNumChannels";
    } else if (Status == NeoIL_LoadingStatus_InvalidWidth) {
        return "NeoIL_LoadingStatus_InvalidWidth";
    } else if (Status == NeoIL_LoadingStatus_UnsupportedFormat) {
        return "NeoIL_LoadingStatus_UnsupportedFormat";
    } else if (Status == NeoIL_LoadingStatus_UnknownError) {
        return "NeoIL_LoadingStatus_UnknownError";
    }

    return "Enum Case Error";

}

}