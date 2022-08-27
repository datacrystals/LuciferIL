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




// Simple struct containing file info
struct IOData {
    std::unique_ptr<unsigned char[]> Data;
    unsigned long Size = 0;
};


// Reads given file into IOData struct
void ReadIOData(IOData& IOData, std::string Path) {

    struct stat Buffer;
    int FileStatus = stat(Path.c_str(), &Buffer);
    IOData.Size = Buffer.st_size + 1;

    IOData.Data.reset(new unsigned char[Buffer.st_size + 1]);
    FILE *Stream = fopen(Path.c_str(), "rb");
    [[maybe_unused]]size_t _ = fread(IOData.Data.get(), sizeof(unsigned char), Buffer.st_size,Stream);
    IOData.Data.get()[Buffer.st_size] = '\0';
    fclose(Stream);
}

// Writes the given IOData struct to the file with specified path
void WriteIOData(IOData &IOData, std::string Path) {
    FILE *Stream = fopen(Path.c_str(), "wb");
    fwrite(IOData.Data.get(), 1, sizeof(unsigned char) * IOData.Size, Stream);
    fclose(Stream);
}


int main() {


    // Init Lucifer Instance
    Lucifer::Lucifer Luci;



    // -- Image Reading Example
    std::cout<<"Loading Image: 'Assets/Test.png' From Disk\n";

    // Read File Into IO Struct
    IOData Data;
    ReadIOData(Data, "Assets/Test.png");
    
    // Read Into Image
    Lucifer::Image Image;
    Lucifer::LoadingStatus Status = Luci.Load(Data.Data.get(), Data.Size, Image);
    std::cout<<Lucifer::Lucifer_GetLoadingStatusString(Status)<<std::endl;



    // -- Image Writing Example
    std::cout<<"Writing Image: 'Assets/TestOutput.png' To Disk\n";

    // Write To New IOData Buffer
    IOData NewData;
    Luci.Write(Image, &NewData.Data, NewData.Size);

    // Write To Disk
    WriteIOData(NewData, "Assets/TestOutput.png");

}
