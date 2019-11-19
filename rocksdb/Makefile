all:test.o test2.o
    g++ -o test test.o
    g++ -o test2 test2.o

test.o:test.cpp
	# g++ -c $@.cpp -o$@  -I/usr/local/include -O2 -std=c++11
	g++ -c test.cpp -otest -std=c++11  -lrocksdb  -lpthread -ldl
test2.o:test2.cpp
	g++ -o test2 test2.cpp -std=c++11 -lrocksdb  -lpthread -ldl