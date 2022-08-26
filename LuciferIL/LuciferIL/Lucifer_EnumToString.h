//---------------------------//
// New Image Library (Lucifer) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once

// Std Lib Includes
#include <string>


// Internal Includes
#include <LuciferIL/Lucifer_LoadingStatusEnum.h>


namespace Lucifer {

/**
 * @brief Converts the loading status enum into a string that can be used for logging.
 * 
 * @param Status Enum returned by image loading functions.
 * @return std::string String containing name of enum.
 */
std::string Lucifer_GetLoadingStatusString(LoadingStatus Status);



};