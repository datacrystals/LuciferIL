mkdir Build

cd Build
cmake --target Lucifer-LoadingTest ..
make -j

cd ..
cd Binaries
./Lucifer-LoadingTest
cd ..