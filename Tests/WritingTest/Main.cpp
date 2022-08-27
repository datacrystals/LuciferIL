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


struct IOData {

    std::unique_ptr<unsigned char[]> Data;
    long Size;
};


void ReadIOData(IOData& IOData, std::string Path) {

    struct stat Buffer;
    int FileStatus = stat(Path.c_str(), &Buffer);
    IOData.Size = Buffer.st_size + 1;


    IOData.Data.reset(new unsigned char[Buffer.st_size + 1]);

    FILE *Stream = fopen(FilePath.c_str(), "rb");

    [[maybe_unused]]size_t _ = fread(IOData.Data.get(), sizeof(unsigned char), Buffer.st_size,Stream);
        
    IOData.Data.get()[Buffer.st_size] = '\0';
    fclose(Stream);


}


int main() {


    Lucifer::Lucifer Luci;

    std::cout<<"Loading Image: 'Assets/Test.png' From Disk With FreeImage\n";

    IOData Data;
    ReadIOData(Data, "Assets/Test.png");
    Lucifer::Image Image;
    Lucifer::LoadingStatus Status = Luci.Load(Data.Data.get(), Data.Size, Image);





}
