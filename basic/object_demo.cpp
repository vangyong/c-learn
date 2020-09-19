#include <iostream>

using namespace std;


class Box {
public:
    double length;   // 长度
    double breadth;  // 宽度
    double height;   // 高度
    double getVolume() {
        return height * length * breadth;
    }
};


int main() {
    //对象类
    Box Box1;
    Box Box2;
    double volume = 0.0;

    // box 1 详述
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 详述
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // box 1 的体积
    volume = Box1.getVolume();
    cout << "Box1 的体积：" << volume << endl;

    // box 2 的体积
    volume = Box2.getVolume();
    cout << "Box2 的体积：" << volume << endl;
}