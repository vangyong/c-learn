#include <iostream>

class Speak {
public:
    void sayHello(const char *);

    static void sayFromStatic(const char *str) {
        std::cout << str << " from a static method\n";
    };
};
