simple_example: simple_example.o
    gcc -o simple_example simple_example.o

simple_example.o: librocksdb simple_example.cpp
	gcc -c $@.cpp -o$@ /usr/local/lib/librocksdb.a -I/usr/local/include -O2 -std=c++11