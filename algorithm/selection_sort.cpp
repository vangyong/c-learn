// Author: 王勇 
// Time: 2019-12-08
// Description: 选择排序

#include <iostream>
#include <algorithm>
#include <string>
#include "student.h"

using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        //寻找[i,n)区间里的最小值
        int minIndex = i; //记录本轮最小值的索引
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int a[10] = {10, 9, 7, 8, 65, 4, 3, 2,5, 1};
    selectionSort(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;


    float b[10] = {10.0, 9.1, 7.2, 8.1, 65.0, 4, 3, 2,5, 1};
    selectionSort(b, 10);
    for (int i = 0; i < 10; i++)
        cout << b[i] << " ";
    cout << endl;


    string c[4] = {"D","C","B","A"};
    selectionSort(c, 4);
    for (int i = 0; i < 4; i++)
        cout << c[i] << " ";
    cout << endl;



    Student d[4] = {{"D",90},{"C",100},{"B",95},{"A",95}};
    selectionSort(d, 4);
    for (int i = 0; i < 4; i++)
        cout << d[i] << " ";
    cout << endl;

    return 0;
}

