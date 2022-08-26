//-----------------------//
// Lucifer Image Library //
// Thomas Liao (2022)    //
//-----------------------//

#include <Lucifer_EnumToString.h>

namespace Lucifer {

std::string Lucifer_GetLoadingStatusString(LoadingStatus Status) {

    if (Status == Lucifer_LoadingStatus_Complete) {
        return "Lucifer_LoadingStatus_Complete";
    } else if (Status == Lucifer_LoadingStatus_InvalidData) {
        return "Lucifer_LoadingStatus_InvalidData";
    } else if (Status == Lucifer_LoadingStatus_InvalidHeight) {
        return "Lucifer_LoadingStatus_InvalidHeight";
    } else if (Status == Lucifer_LoadingStatus_InvalidNumChannels) {
        return "Lucifer_LoadingStatus_InvalidNumChannels";
    } else if (Status == Lucifer_LoadingStatus_InvalidWidth) {
        return "Lucifer_LoadingStatus_InvalidWidth";
    } else if (Status == Lucifer_LoadingStatus_UnsupportedFormat) {
        return "Lucifer_LoadingStatus_UnsupportedFormat";
    } else if (Status == Lucifer_LoadingStatus_UnknownError) {
        return "Lucifer_LoadingStatus_UnknownError";
    }

    return "Enum Case Error";

}

}