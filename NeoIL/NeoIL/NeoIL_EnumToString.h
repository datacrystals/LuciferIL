//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once

// Std Lib Includes
#include <string>


// Internal Includes
#include <NeoIL_LoadingStatusEnum.h>


namespace NeoIL {

/**
 * @brief Converts the loading status enum into a string that can be used for logging.
 * 
 * @param Status Enum returned by image loading functions.
 * @return std::string String containing name of enum.
 */
std::string NeoIL_GetLoadingStatusString(LoadingStatus Status);



};