//---------------------------//
// New Image Library (Lucifer) //
// Thomas Liao (2022)        //
//---------------------------//

#include <LuciferIL/Lucifer_EnumToLogLevel.h>

namespace Lucifer {

int Lucifer_GetLoadingStatusLevel(LoadingStatus Status) {

    if (Status == Lucifer_LoadingStatus_Complete) {
        return 0;
    } else if (Status == Lucifer_LoadingStatus_InvalidData) {
        return 3;
    } else if (Status == Lucifer_LoadingStatus_InvalidHeight) {
        return 1;
    } else if (Status == Lucifer_LoadingStatus_InvalidNumChannels) {
        return 2;
    } else if (Status == Lucifer_LoadingStatus_InvalidWidth) {
        return 1;
    } else if (Status == Lucifer_LoadingStatus_UnsupportedFormat) {
        return 1;
    } else if (Status == Lucifer_LoadingStatus_UnknownError) {
        return 4;
    }

    return -1;

}

}