#include<iostream>
using namespace std;
class Time
{
private:
	int h;int m;int s;
public:
	void inputT()
	{begin:
		int a, b, c;
		cout << "����ʱ��(H:M:S)" << endl;
		cin >> a >> b >> c;
		if (c>60||c<0)
		{
			cout << "ʱ�䲻�Ϸ�����������" << endl;
			goto begin;
		}
		else
		{
			if (b>60||b<0)
			{
				cout << "ʱ�䲻�Ϸ�����������" << endl;
				goto begin;
			}
			else
			{
				if (a>24||a<0)
				{
					cout << "ʱ�䲻�Ϸ�����������" << endl;
					goto begin;
				}
				else if (a==24)
				{
					if (b!=0||c!=0)
					{
						cout << "ʱ�䲻�Ϸ�����������" << endl;
						goto begin;
					}
					else
					{
						h = a;
						m = b;
						s = c;
					}
				}
				else
				{
					h = a;
					m = b;
					s = c;
				}
			}
		}
	}
	void changeT()
	{
		char p;
		cout << "�Ƿ��޸�ʱ�䣺��Y/N��" << endl;
		cin >> p;
		if (p=='n'||p=='N')
		{
			cout << "�õģ����޸�" << endl;
		}
		else
		{begin1:
			int a, b, c;
			cout << "����ʱ��(H:M:S)" << endl;
			cin >> a >> b >> c;
			if (c > 60 || c < 0)
			{
				cout << "ʱ�䲻�Ϸ�����������" << endl;
				goto begin1;
			}
			else
			{
				if (b > 60 || b < 0)
				{
					cout << "ʱ�䲻�Ϸ�����������" << endl;
					goto begin1;
				}
				else
				{
					if (a > 24 || a < 0)
					{
						cout << "ʱ�䲻�Ϸ�����������" << endl;
						goto begin1;
					}
					else if (a == 24)
					{
						if (b != 0 || c != 0)
						{
							cout << "ʱ�䲻�Ϸ�����������" << endl;
							goto begin1;
						}
						else
						{
							h = a;
							m = b;
							s = c;
						}
					}
					else
					{
						h = a;
						m = b;
						s = c;
					}
				}
			}
		}
	}
	void output()
	{
		cout << "���ʱ��(H:M:S)" << h << ":" << m << ":" << s << endl;
	}
};
void main()
{
	Time time;
	time.inputT();
	time.output();
	time.changeT();
	time.output();
}