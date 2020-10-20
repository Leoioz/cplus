#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << setfill('*')			//设置填充符号为*
		<< setw(2) << 21 << endl	//设置有几个填充符
		<< setw(3) << 21 << endl
		<< setw(4) << 21 << endl;
	cout << setfill(' ');			//小细节：括号里面有个空格
}