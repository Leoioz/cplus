#include <iostream>
#include <cmath>
using namespace std;
double max(double x, double y)
{
	if (x > y)
		return x;
	else
	{
		return y;
	}
}
int main()
{
	double a, b, c;
	cout << "输入两个数字" << endl;
	cin >> a >> b;
	c = max(a, b);
	cout << "这两个数字的平方是" << sqrt(c);
}

