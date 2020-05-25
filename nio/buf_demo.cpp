#include <stdio.h>

int main(void) {
    std::cout << std::unitbuf;//所有输出操作立即刷新缓冲区
    std::cout << "hello,world";
    std::cout << std::nounitbuf;//回到正常的缓冲方式
    system("pause");
    return 0;
}