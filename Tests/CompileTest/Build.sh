mkdir Build

cd Build
cmake ..
cmake --build . --target Lucifer-CompileTest -j 

cd ..
cd Binaries
./Lucifer-CompileTest
cd ..