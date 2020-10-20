#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main()
{
	int i = 1, sum = 0;
	while (i<=100)
	{
		sum = sum + i;
		i = i + 1;
	}
	cout << "sum=" << sum << endl;
}