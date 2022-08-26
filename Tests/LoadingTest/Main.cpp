// In-Memory Image Loading Test

#include <iostream>
#include <fstream>
#include <map>

#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <sys/stat.h>
#include <stdlib.h>

#include <NeoIL/NeoIL.h>
#include <NeoIL/NeoIL_STBLoadImage.h>
#include <NeoIL/NeoIL_FreeImageLoadImage.h>
#include <NeoIL/NeoIL_EnumToString.h>


struct ImageFileObject {

    // Declare Member Variables
    BYTE *MemoryBuffer;
    struct stat Buffer;
    int Result;


    // Load File Into Mem
    bool LoadImage(const char* FilePath) { // Loads Image Into Memory Buffer, Returns True On Success, False On Failure

        // Get File Stats
        Result = stat(FilePath, &Buffer);
        if (Result == 0) {

            MemoryBuffer = (BYTE*)malloc(Buffer.st_size * sizeof(BYTE));
            if (MemoryBuffer) {

                FILE *Stream = fopen(FilePath, "rb");
                if (Stream) {

                    // Read File Data
                    fread(MemoryBuffer, sizeof(BYTE), Buffer.st_size, Stream);
                    fclose(Stream);

                    return true;

                }
            }
        }

        // Return Fail
        return false;

    }


};


void TestLoad(const char* Path) {

    // Load Image Path
    ImageFileObject Obj;
    Obj.LoadImage(Path);

    // Load Image Into Memory
    std::cout<<"Loading Image Into Memory Object\n";
    NeoIL::Image Image;
    NeoIL::LoadingStatus Status = NeoIL::NeoIL_STBLoad(Obj.MemoryBuffer, Obj.Buffer.st_size, Image);

    std::cout<<"Image Loading Status Is: "<<NeoIL::NeoIL_GetLoadingStatusString(Status)<<std::endl;

    // List Image Information
    std::cout<<"Image Is "<<Image.Width<<"px Wide\n";
    std::cout<<"Image Is "<<Image.Height<<"px Tall\n";
    std::cout<<"Image Has "<<Image.Channels<<" Color Channels\n";
    
    // Delete Image From buffer
    free(Obj.MemoryBuffer);

}

int main() {

    // Init FreeImage
    FreeImage_Initialise();

    // Load Test.png
    std::cout<<"Loading Image: 'Assets/Test.png' From Disk\n";
    TestLoad("Assets/Test.png");
    
    // Load Test.png
    std::cout<<"Loading Image: 'Assets/Test.jpg' From Disk\n";
    TestLoad("Assets/Test.jpg");



    // De-Init FreeImage
    FreeImage_DeInitialise();

}
