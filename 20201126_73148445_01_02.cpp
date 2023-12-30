#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double amount = 22.0 / 7;
	cout << amount << endl;
	cout << setprecision(0) << amount << endl
		<< setprecision(1) << amount << endl
		<< setprecision(2) << amount << endl
		<< setprecision(3) << amount << endl
		<< setprecision(4) << amount << endl
		<< setprecision(5) << amount << endl;
	cout << fixed << setprecision(8) << amount << endl;
	cout << scientific << amount << endl;
	cout << setprecision(6) << endl;
}