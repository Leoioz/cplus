#define _CRT_SECURE_NO_WARNINGS       //��vs2019�汾��дc++��ʹ��c����ʱ�����а�ȫ�Ը澯Ԥ����_CRT_SECURE_NO_WARNINGS��ȡ���澯��
#include<iostream>
using namespace std;

class Name													//��һ�����ǰѹ�Ա������name�����
{
public:
	Name();
	Name(char* n_x, char* n_m);
	void display();
	void change_name(char* n_x, char* n_m);

private:													//��������Ϊ�պ�������Ϊ�������ݳ�Ա������Ϊ�ַ���
	char name_xin[30];
	char name_ming[30];
};
Name::Name(char* n_x, char* n_m)							//����ʹ�ù��캯���������ݳ�Ա
{
	strcpy(name_xin, n_x);
	strcpy(name_ming, n_m);
}
void Name::display()										//�������
{
	cout << name_xin << name_ming;
}
void Name::change_name(char* n_x, char* n_m)				//�ı�����
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
Employee::Employee(char* s, char* c, char* p, char* z)	//����ʹ�õ���ָ�����������һ������˽�еĳ�Ա����
{

	strcpy(street, s);
	strcpy(city, c);
	strcpy(provance, p);
	strcpy(zip, z);
}
void Employee::display()						//�������
{
	cout << "�ļ�ͥסַ�ǣ�" 
		<< street
		<< city 
		<< provance 
		<< zip << endl;
}
void main()
{
	Name name("��", "��");
	name.display();
	Employee test("����ʡ", "������", "��Ϫ��", "000000");
	test.display();
	name.change_name("��", "��");
	name.display();
	test.display();
	system("pause");
}