//---------------------------//
// New Image Library (NeoIL) //
// Thomas Liao (2022)        //
//---------------------------//

#include <NeoIL.h>

NeoIL::NeoIL::NeoIL() {

    FreeImage_Initialise();

}

NeoIL::NeoIL::~NeoIL() {

    FreeImage_DeInitialise();

}