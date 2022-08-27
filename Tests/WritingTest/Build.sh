mkdir Build

cd Build
cmake --target Lucifer-WritingTest ..
make -j

cd ..
cd Binaries
./Lucifer-WritingTest
cd ..