#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>

using namespace std;

int n = 1;
void func()
{
	static int x = 4;
	int y = 10;
	x = x + 2;
	n = n + 10;
	y = y + n;
	cout << "Func--x=" << x
		<< ",y=" << y << ",n=" << n << endl;
}
int main()
{
	static	int x = 5;
	int y = n;
	cout << "Main--x=" << x
		<< ",y" << y << ",n=" << n << endl;
	func();
	cout << "Main--x=" << x
		<< ",y=" << y << ",n=" <<n<< endl;
	func();
}
