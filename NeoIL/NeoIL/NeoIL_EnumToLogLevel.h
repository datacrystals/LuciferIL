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
 * @brief Converts the loading status enum into an int representing the severity of the state.
 * 
 * @param Status Enum returned by image loading functions.
 * @return int String containing name of enum.
 */
int NeoIL_GetLoadingStatusLevel(LoadingStatus Status);



};