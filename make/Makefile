target: mytool1.o mytool2.o main.o
    gcc -g -o target mytool1.o mytool2.o main.o
mytool1.o: mytool1.c mytool1.h
    gcc -g -c mytool1.c
mytool2.o: mytool2.c mytool2.h
    gcc -g -c mytool2.c
main.o: main.c mytool1.h mytool2.h
    gcc -g -c main.c
