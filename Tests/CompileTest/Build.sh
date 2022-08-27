mkdir Build

cd Build
cmake --target Lucifer-CompileTest ..
make -j

cd ..
cd Binaries
./Lucifer-CompileTest
cd ..