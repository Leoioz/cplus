#include<iostream>
using namespace std;

void display(int i)
{
    cout << "A int :" << i << endl;
}

void display(double d)
{
    cout <<showpoint << "A double :" << d << endl;
}

void display(char c)
{
    cout << "A char :" << c << endl;
}

int main()
{
    display(12);    //int
    display(12.0);  //double
    display('a');      //char
    display(3.14);  //float
    display(-50);      //short
    return 0;
}
