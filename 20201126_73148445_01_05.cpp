#include<iostream>
using namespace std;

int main()
{
	int number = 1001;
	cout << "decimal=" << dec <<uppercase<< number << endl //uppercase是用来解决十六进制输出为大写的
		<< "hexadeciaml=" << hex << number << endl
		<< "octal=" << oct << number << endl;
}