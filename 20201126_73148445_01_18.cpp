#include<iostream>
#include<string>
using namespace std;

void swap(string& ap, string& bp);

void swap(string& rap, string& rbp)
{
	string temp = rap;
	rap = rbp;
	rbp = temp;
}

int main()
{
	string ap="hello";
	string bp="how are you";
	cout << "string * ap=" << '"' << ap << '"' << endl;
	cout << "string * bp=" << '"' << bp << '"' << endl;

	swap(ap, bp);

	cout << "ap:" << '"' << ap << '"' << endl;
	cout << "bp:" << '"' << bp << '"' << endl;
}
