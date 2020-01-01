// Copyright 2019 Google Inc
// License BSD
// Author: wangyong
// This is c plus test

#include <iostream>

class Speak {
public:
    void sayHello(const char *);

    static void sayFromStatic(const char *str) {
        std::cout << str << " from a static method\n";
    };
};
