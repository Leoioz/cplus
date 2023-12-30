#include<iostream>
using namespace std;
class Date
{
private:																//��˽�е����ݳ�Ա
	int day;
	int month;
	int year;

protected:																//�ܱ����ĳ�Ա����
	bool IsLeapYear()													//�ж��Ƿ�Ϊ����ĳ�Ա����
	{
		bool Yjudge;													//��ʼ��һ����������,judge
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)		//��ݳ�4�Ƿ����0�ͳ�100�Ƿ񲻵���0�����400�Ƿ����0
			Yjudge = true;												//�����Ȳ���ֵ��Ϊtrue
		else
			Yjudge = false;												//�����Ȳ���ֵ��Ϊfalse
		return Yjudge;													//����judge��ֵ
	}
public:
	void SetDate(int d, int m, int y)									//���ý�ʵ��ֵ���β�
	{
		day = d;
		month = m;
		year = y;
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)						//�ж�Ϊ����
		{
			if (m == 2 && d >= 30)												//�����������Ϊ2�������ڴ��ڵ���30
			{
				cout << "���ڲ��Ϸ�������" << endl;								//�򲻺Ϸ�
				cout << "���������������գ��ո������" << endl;
				cin >> y >> m >> d;
			}
			else
			{
				while (m == 1 || m == 3 || m == 7 || m == 8 || m == 10 || m == 12 && d < 1 || d >= 32 || m < 1 || m >= 13)//�����жϴ���
				{
					cout << "���ڲ��Ϸ�������" << endl;
					cout << "���������������գ��ո������" << endl;
					cin >> y >> m >> d;
				}
			}
		}
		else																	//����Ϊƽ��
		{
			while (m == 4 || m == 6 || m == 9 || m == 11 && d < 1 || d >= 30 || m < 1 || m >= 13)//�ж�4��6��9��11�ĺϷ���
			{
				cout << "���ڲ��Ϸ�������" << endl;
				cout << "���������������գ��ո������" << endl;
				cin >> y >> m >> d;
			}
		}
	}

	void DisplaySetDate()												//��ʾ��Ļ���
	{
		cout << day << "/" << month << "/" << year << endl;
	}

	void AddDate()														//�����ڼ�һ��
	{
		day++;															//�Ȱ�����day����������������ȼ�1�����day�������day��1
		if (IsLeapYear())												//�ж�����ĳ�Ա��������ֵΪtrue����ô����2�����Ĭ��29��
		{
			if (month == 2 && day == 30)								//�����·����õ���2��29��1������ڵ���30
			{
				day = 1;											//��ô�Ͱ�1��ֵday���·�����1
				month++;
			}
		}
		else															//�������Ϊfalse��˵����ƽ�꣬ƽ�����28��
		{
			if (month == 2 && day == 29)								//ͬ���ģ�ƽ�����day++�ԼӺ���29
			{
				day = 1;												//��ô�͵�3�£�ͬ��
				month++;
			}
		}
		if (day > 31)													//���day�ԼӺ����31
		{
			if (month == 12)											//���������12�£���ô���ں���������1������ԼӾ���
			{
				day = 1;
				month = 1;
				year++;
			}
			else														//�����¾�ֱ�Ӽ�1
			{
				day = 1;
				month++;
			}
		}
		else if (day == 31)												//���ǰ�治���㣬day�պ��Լӵ�31
		{
			if (month == 4 || month == 6 || month == 9 || month == 11)	//��Ϊ�·�Ϊ4��6��9��11�������ֱ���·ݼ�1
			{
				day = 1;
				month++;
			}
		}
	}
};

int main()
{
	int y, m, d;
	cout << "�������ڣ��ո������" << endl;
	cin >> y >> m >> d;
	Date date;
	date.SetDate(d,m,y);
	cout << "����������ǣ�" << endl;
	date.DisplaySetDate();
	cout << "���������+1�ǣ�" << endl;
	date.AddDate();
	date.DisplaySetDate();
	cout << "�����Ѿ�������";
	system("pause");
}
