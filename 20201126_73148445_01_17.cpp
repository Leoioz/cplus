#include<iostream>
#include<iomanip>
using namespace std;

const float pi=3.14;

double circle(double radius);					//�뾶
double rect(double width,double length);		//����

double circle(double radius)					//����Բ�����
{
	return pi*radius*radius;
}				

double rect(double width,double length)			//���㷽�����
{
	return width*length;
}

void main()
{
	double radius;
	cout<<"get a radius:"<<endl;
	cin>>radius;
	cout<<"ring area="<<circle(radius)<<showpoint<<endl;


	double width,length;
	cout<<"get a width & length:"<<endl;
	cin>>width>>length;
	cout<<"rectangle area="<<rect(width,length)<<endl;

	system("pause");

}


