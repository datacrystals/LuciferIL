mkdir Build

cd Build
cmake ..
make -j

cd ..
cd Binaries
./NeoIL-CompileTest
cd ..