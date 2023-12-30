#define _CRT_SECURE_NO_WARNINGS       //在vs2019版本编写c++是使用c函数时，会有安全性告警预定义_CRT_SECURE_NO_WARNINGS，取消告警。
#include<iostream>
using namespace std;

class Name													//第一个类是把雇员类里面name提出来
{
public:
	Name();
	Name(char* n_x, char* n_m);
	void display();
	void change_name(char* n_x, char* n_m);

private:													//把姓名分为姓和名，设为保护数据成员，类型为字符型
	char name_xin[30];
	char name_ming[30];
};
Name::Name(char* n_x, char* n_m)							//继续使用构造函数声明数据成员
{
	strcpy(name_xin, n_x);
	strcpy(name_ming, n_m);
}
void Name::display()										//输出姓名
{
	cout << name_xin << name_ming;
}
void Name::change_name(char* n_x, char* n_m)				//改变姓名
{
	strcpy(name_xin, n_x);
	strcpy(name_ming, n_m);
}

class Employee
{
public:
	Employee(char* s, char* c, char* p, char* z);
	void display();

private:
	char street[30];
	char city[20];
	char provance[20];
	char zip[8];
};
Employee::Employee(char* s, char* c, char* p, char* z)	//这里使用的是指针在类外访问一个类中私有的成员变量
{

	strcpy(street, s);
	strcpy(city, c);
	strcpy(provance, p);
	strcpy(zip, z);
}
void Employee::display()						//输出函数
{
	cout << "的家庭住址是：" 
		<< street
		<< city 
		<< provance 
		<< zip << endl;
}
void main()
{
	Name name("张", "三");
	name.display();
	Employee test("贵州省", "贵阳市", "花溪区", "000000");
	test.display();
	name.change_name("王", "五");
	name.display();
	test.display();
	system("pause");
}