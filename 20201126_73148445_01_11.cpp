#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a = 3, b = 5, c;
	c = a * b + ++b;		//++b�ȼ���b=b+1
	cout << c << endl;
}