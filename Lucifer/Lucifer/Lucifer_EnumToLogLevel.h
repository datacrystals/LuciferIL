//---------------------------//
// New Image Library (Lucifer) //
// Thomas Liao (2022)        //
//---------------------------//

#pragma once

// Std Lib Includes
#include <string>


// Internal Includes
#include <Lucifer/Lucifer_LoadingStatusEnum.h>


namespace Lucifer {

/**
 * @brief Converts the loading status enum into an int representing the severity of the state.
 * 
 * @param Status Enum returned by image loading functions.
 * @return int String containing name of enum.
 */
int Lucifer_GetLoadingStatusLevel(LoadingStatus Status);



};