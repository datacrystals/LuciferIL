//-----------------------//
// Lucifer Image Library //
// Thomas Liao (2022)    //
//-----------------------//

#include <Lucifer.h>

Lucifer::Lucifer::Lucifer() {

    FreeImage_Initialise();

}

Lucifer::Lucifer::~Lucifer() {

    FreeImage_DeInitialise();

}