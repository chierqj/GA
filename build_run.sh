rm -fr bin/*

cd build
cmake ../
make

cd ../bin
./GA