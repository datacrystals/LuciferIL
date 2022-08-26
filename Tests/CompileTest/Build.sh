mkdir Build

cd Build
cmake ..
make -j

cd ..
cd Binaries
./Lucifer-CompileTest
cd ..