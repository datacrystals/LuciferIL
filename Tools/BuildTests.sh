echo "Building Tests"

cd ../Tests


cd CompileTest
bash Build.sh
cd ..

cd LoadingTest
bash Build.sh
cd ..

cd ../Tools
