
## 编译
gcc -o test main.c
gcc -fPIC -shared -o hook.so hook.c -ldl

g++ -o test main.cpp
g++ -fPIC -shared -o hook.so hook.cpp -lstdc++

## 运行
LD_PRELOAD=./hook.so ./test 123