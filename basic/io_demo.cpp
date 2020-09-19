#include <iostream>
#include <fstream>


class IoDemo {

public:
    static void writeFile(void) {

        char data[100];

        // 以写模式打开文件
        ofstream outfile;
        outfile.open("afile.dat");

        std::cout << "Writing to the file" << std::endl;
        std::cout << "Enter your name: ";
//      std::cin.getline(data, 100);
        std::cin >> data;

        // 向文件写入用户输入的数据
        outfile << data << endl;

        std::cout << "Enter your age: ";
        std::cin >> data;
        std::cin.ignore();

        // 再次向文件写入用户输入的数据
        outfile << data << std::endl;

        // 关闭打开的文件
        outfile.close();

    };

    static void readFile(void) {
        char data[100];

        // 以读模式打开文件
        ifstream infile;
        infile.open("afile.dat");

        std::cout << "Reading from the file" << std::endl;
        infile >> data;

        // 在屏幕上写入数据
        std::cout << data << std::endl;

        // 再次从文件读取数据，并显示它
        infile >> data;
        std::cout << data << endl;

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


