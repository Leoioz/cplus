#define _CRT_SECURE_NO_WARNINGS       //��vs2019�汾��дc++��ʹ��c����ʱ�����а�ȫ�Ը澯Ԥ����_CRT_SECURE_NO_WARNINGS��ȡ���澯��
#include <iostream>

using namespace std;

class Employee						 //����һ������Ա����
{
private:							 //�����˽�����ݳ�Ա���ַ�������
	char name[30];				   
	char street[30];
	char city[20];
	char provance[20];
	char zip[8];
public:								
	Employee(char* n, char* s, char* c, char* p, char* z);	//���캯����ʼ�����ݳ�Ա
	void change_name(char* n);		//�������
	void display();					//�ı�����
};
Employee::Employee(char* n, char* s, char* c, char* p, char* z)	//����ʹ�õ���ָ�����������һ������˽�еĳ�Ա����
{
	strcpy(name, n);
	strcpy(street, s);
	strcpy(city, c);
	strcpy(provance, p);
	strcpy(zip, z);
}
void Employee::change_name(char* n)				//�ı�����
{
	strcpy(name, n);
}
void Employee::display()						//�������
{
	cout << name << "�ļ�ͥסַ�ǣ�" << street
		<< city << provance<< zip << endl;
}
void main()
{
	Employee test("Ա��1", "����ʡ","������" ,"��Ϫ��", "000000");
	test.display();
	test.change_name("Ա��2");
	test.display();
}
