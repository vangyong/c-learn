#include <fstream>
#include <iostream>

using namespace std;

class IoDemo {

public:
    static void writeFile(void) {

        char data[100];

        // 以写模式打开文件
        ofstream outfile;
        outfile.open("afile.dat");

        cout << "Writing to the file" << endl;
        cout << "Enter your name: ";
//      cin.getline(data, 100);
        cin >> data;

        // 向文件写入用户输入的数据
        outfile << data << endl;

        cout << "Enter your age: ";
        cin >> data;
        cin.ignore();

        // 再次向文件写入用户输入的数据
        outfile << data << endl;

        // 关闭打开的文件
        outfile.close();

    };

    static void readFile(void) {
        char data[100];

        // 以读模式打开文件
        ifstream infile;
        infile.open("afile.dat");

        cout << "Reading from the file" << endl;
        infile >> data;

        // 在屏幕上写入数据
        cout << data << endl;

        // 再次从文件读取数据，并显示它
        infile >> data;
        cout << data << endl;

        // 关闭打开的文件
        infile.close();
    }

};

int main() {
    IoDemo ioDemo;
    ioDemo.writeFile();
    ioDemo.readFile();
    return 0;
}


