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
	cout << "������������" << endl;
	cin >> a >> b;
	c = max(a, b);
	cout << "���������ֵ�ƽ����" << sqrt(c);
}

