#include <iostream>
#include "basic/object_demo.cpp"
#include "basic/speak.cpp"
#include "basic/exception_demo.cpp"
#include "basic/io_demo.cpp"

int main() {
    //简单打印hello world
    std::cout << "Hello, World!" << std::endl;

    //输入、类型转换
    int books, months;
    double booksPerMonth;
    std::cout << "How many books do you plan to read? ";
    std::cin >> books;
    std::cout << "How many months will it take you to read them? ";
    std::cin >> months;
    booksPerMonth = static_cast<double>(books) / months; //计算每个月阅读量
    std::cout << "That is " << booksPerMonth << " books per month.\n";

    //指针
    int var = 20;   // 实际变量的声明
    int *ip;        // 指针变量的声明
    ip = &var;       // 在指针变量中存储 var 的地址
    int **a;

    std::cout << "Value of var variable: ";
    std::cout << var << std::endl;

    // 输出在指针变量中存储的地址
    std::cout << "Address stored in ip variable: ";
    std::cout << ip << std::endl;

    // 访问指针中地址的值
    std::cout << "Value of *ip variable: ";
    std::cout << *ip << std::endl;

    // 访问指针中地址的值
    std::cout << "Value of * *a variable: ";
    std::cout << &a << std::endl;

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

    //头文件
    Speak speak;
    speak.sayHello("this is my word");
    speak.sayFromStatic("call static");


    //内存管理
    double* pvalue  = NULL; // 初始化为 null 的指针
    pvalue  = new double;   // 为变量请求内存
    *pvalue = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue;         // 释放内存


    //自定义异常
    try
    {
        throw MyException();
    }
    catch(MyException& e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(std::exception& e)
    {
        //其他的错误
    }

    FileTest fileTest;
    fileTest.writeFile();
    fileTest.readFile();

    return 0;
}