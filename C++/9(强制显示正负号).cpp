#include<iostream>
using namespace std;

int main()
{
	cout << 10<<" "<<-20<< endl;					//一般情况下只显示负号
	cout << showpos << 10<<" "<<-20 << endl;		//全部显示正负号
}