// In-Memory Image Writing Test

#include <iostream>
#include <fstream>
#include <map>

#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <sys/stat.h>
#include <stdlib.h>

#include <LuciferIL/Lucifer.h>
#include <LuciferIL/Lucifer_EnumToString.h>


struct ImageFileObject {

    // Declare Member Variables
    unsigned char *MemoryBuffer;
    struct stat Buffer;
    int Result;


    // Load File Into Mem
    bool LoadImage(const char* FilePath) { // Loads Image Into Memory Buffer, Returns True On Success, False On Failure

        // Get File Stats
        Result = stat(FilePath, &Buffer);
        if (Result == 0) {

            MemoryBuffer = (BYTE*)malloc(Buffer.st_size * sizeof(unsigned char));
            if (MemoryBuffer) {

                FILE *Stream = fopen(FilePath, "rb");
                if (Stream) {

                    // Read File Data
                    fread(MemoryBuffer, sizeof(unsigned char), Buffer.st_size, Stream);
                    fclose(Stream);

                    return true;

                }
            }
        }

        // Return Fail
        return false;

    }


};




int main() {


    Lucifer::Lucifer Luci;

    std::cout<<"Loading Image: 'Assets/Test.png' From Disk With FreeImage\n";
    ImageFileObject Obj;
    Obj.LoadImage("Assets/Test.png");
    Lucifer::Image Image;
    Lucifer::LoadingStatus Status = Luci.Load(Obj.MemoryBuffer, Obj.Buffer.st_size, Image);





}
