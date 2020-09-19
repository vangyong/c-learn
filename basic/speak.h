// Author: 王勇
// Time: 2020-09-19
// Description: 说话接口

#include <iostream>

class Speak {
public:
    void sayHello(const char *);

    static void sayFromStatic(const char *str) {
        std::cout << str << " from a static method\n";
    };
};
