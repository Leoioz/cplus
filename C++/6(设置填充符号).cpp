#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << setfill('*')			//����������Ϊ*
		<< setw(2) << 21 << endl	//�����м�������
		<< setw(3) << 21 << endl
		<< setw(4) << 21 << endl;
	cout << setfill(' ');			//Сϸ�ڣ����������и��ո�
}