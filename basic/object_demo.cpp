#include <iostream>

using namespace std;


class Box {
public:
    double length;   // 长度
    double breadth;  // 宽度
    double height;   // 高度
    double getVolume(){
        return height * length * breadth;
    }
};