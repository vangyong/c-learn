
## 编译
gcc -o test main.c
gcc -fPIC -shared -o hook.so hook.c -ldl

gcc -o test main.cpp
gcc -fPIC -shared -o hook.so hook.cpp -ldl

## 运行
LD_PRELOAD=./hook.so ./test 123