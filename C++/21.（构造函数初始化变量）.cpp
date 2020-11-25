#define _CRT_SECURE_NO_WARNINGS       //在vs2019版本编写c++是使用c函数时，会有安全性告警预定义_CRT_SECURE_NO_WARNINGS，取消告警。
#include <iostream>

using namespace std;

class Employee						 //创建一个“雇员”类
{
private:							 //类的是私有数据成员，字符型数组
	char name[30];				   
	char street[30];
	char city[20];
	char provance[20];
	char zip[8];
public:								
	Employee(char* n, char* s, char* c, char* p, char* z);	//构造函数初始化数据成员
	void change_name(char* n);		//输出函数
	void display();					//改变姓名
};
Employee::Employee(char* n, char* s, char* c, char* p, char* z)	//这里使用的是指针在类外访问一个类中私有的成员变量
{
	strcpy(name, n);
	strcpy(street, s);
	strcpy(city, c);
	strcpy(provance, p);
	strcpy(zip, z);
}
void Employee::change_name(char* n)				//改变姓名
{
	strcpy(name, n);
}
void Employee::display()						//输出函数
{
	cout << name << "的家庭住址是：" << street
		<< city << provance<< zip << endl;
}
void main()
{
	Employee test("员工1", "贵州省","贵阳市" ,"花溪区", "000000");
	test.display();
	test.change_name("员工2");
	test.display();
}
