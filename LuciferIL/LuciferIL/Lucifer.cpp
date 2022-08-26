//---------------------------//
// New Image Library (Lucifer) //
// Thomas Liao (2022)        //
//---------------------------//

#include <LuciferIL/Lucifer.h>

Lucifer::Lucifer::Lucifer() {

    FreeImage_Initialise();

}

Lucifer::Lucifer::~Lucifer() {

    FreeImage_DeInitialise();

}