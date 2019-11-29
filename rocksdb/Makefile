all:test.o test2.o
        g++ -o test test.o -lrocksdb  -lpthread -ldl
        g++ -o test2 test2.o -lrocksdb  -lpthread -ldl

test.o:test.cpp
        # g++ -c $@.cpp -o$@  -I/usr/local/include -O2 -std=c++11
        g++ -c test.cpp -std=c++11  -lrocksdb  -lpthread -ldl
test2.o:test2.cpp
        g++ -c test2.cpp -std=c++11 -lrocksdb  -lpthread -ldl
