#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << right					// ��������ÿ���ַ������Զ
		<< setw(2) << 1
		<< setw(8) << 2
		<< setw(5) << 3 << endl;
	cout << left					// �������ң�ÿ���ַ������Զ
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;
}