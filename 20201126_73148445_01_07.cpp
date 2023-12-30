#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << right					// 从右往左，每个字符间隔多远
		<< setw(2) << 1
		<< setw(8) << 2
		<< setw(5) << 3 << endl;
	cout << left					// 从左往右，每个字符间隔多远
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;
}