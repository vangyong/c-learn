#include <iostream>

using namespace std;



int main() {
	int  var = 20;   // ʵ�ʱ���������
	int *ip;        // ָ�����������
	ip = &var;       // ��ָ������д洢 var �ĵ�ַ
	int * *a;

	cout << "Value of var variable: ";
	cout << var << endl;

	// �����ָ������д洢�ĵ�ַ
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// ����ָ���е�ַ��ֵ
	cout << "Value of *ip variable: ";
	cout << *ip << endl;
	
	// ����ָ���е�ַ��ֵ
	cout << "Value of * *a ariable: ";
	cout << &a << endl;
	

	return 0;
}
