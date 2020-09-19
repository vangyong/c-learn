#include <iostream>

using namespace std;

class Main{

}

int main() {
    //简单打印hello world
    cout << "Hello, World!" << endl;

    //输入、类型转换
    int books, months;
    double booksPerMonth;
    cout << "How many books do you plan to read? ";
    cin >> books;
    cout << "How many months will it take you to read them? ";
    cin >> months;
    booksPerMonth = static_cast<double>(books) / months; //计算每个月阅读量
    cout << "That is " << booksPerMonth << " books per month.\n";

    //指针
    int var = 20;   // 实际变量的声明
    int *ip;        // 指针变量的声明
    ip = &var;       // 在指针变量中存储 var 的地址
    int **a;

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    // 访问指针中地址的值
    cout << "Value of * *a variable: ";
    cout << &a << endl;

    //内存管理
    double *pvalue = NULL; // 初始化为 null 的指针
    pvalue = new double;   // 为变量请求内存
    *pvalue = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue;         // 释放内存

    return 0;
}
