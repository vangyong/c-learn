#include <iostream>
#include <fstream>

using namespace std;



int main () {

	double* pvalue  = NULL; // ��ʼ��Ϊ null ��ָ��
	pvalue  = new double;   // Ϊ���������ڴ�

	*pvalue = 29494.99;     // �ڷ���ĵ�ַ�洢ֵ
	cout << "Value of pvalue : " << *pvalue << endl;

	delete pvalue;         // �ͷ��ڴ�

	return 0;
}
