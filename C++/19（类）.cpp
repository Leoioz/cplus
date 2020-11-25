#include<iostream>
using namespace std;
class Date
{
private:																//类私有的数据成员
	int day;
	int month;
	int year;

protected:																//受保护的成员函数
	bool IsLeapYear()													//判断是否为闰年的成员函数
	{
		bool Yjudge;													//初始化一个布尔类型,judge
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)		//年份除4是否等于0和除100是否不等于0，或除400是否等于0
			Yjudge = true;												//如果相等布尔值设为true
		else
			Yjudge = false;												//如果相等布尔值设为false
		return Yjudge;													//返回judge的值
	}
public:
	void SetDate(int d, int m, int y)									//设置将实参值给形参
	{
		day = d;
		month = m;
		year = y;
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)						//判断为闰年
		{
			if (m == 2 && d >= 30)												//如果闰年月数为2月且日期大于等于30
			{
				cout << "日期不合法！！！" << endl;								//则不合法
				cout << "请重新输入年月日，空格键隔开" << endl;
				cin >> y >> m >> d;
			}
			else
			{
				while (m == 1 || m == 3 || m == 7 || m == 8 || m == 10 || m == 12 && d < 1 || d >= 32 || m < 1 || m >= 13)//否则判断大月
				{
					cout << "日期不合法！！！" << endl;
					cout << "请重新输入年月日，空格键隔开" << endl;
					cin >> y >> m >> d;
				}
			}
		}
		else																	//否则为平年
		{
			while (m == 4 || m == 6 || m == 9 || m == 11 && d < 1 || d >= 30 || m < 1 || m >= 13)//判断4，6，9，11的合法性
			{
				cout << "日期不合法！！！" << endl;
				cout << "请重新输入年月日，空格键隔开" << endl;
				cin >> y >> m >> d;
			}
		}
	}

	void DisplaySetDate()												//显示屏幕输出
	{
		cout << day << "/" << month << "/" << year << endl;
	}

	void AddDate()														//把日期加一天
	{
		day++;															//先把日期day变量用自增运算符先加1，这个day比输入的day大1
		if (IsLeapYear())												//判断闰年的成员函数返回值为true，那么闰年2月最大默认29号
		{
			if (month == 2 && day == 30)								//并且月份正好等于2；29加1后的日期等于30
			{
				day = 1;											//那么就把1赋值day，月份增加1
				month++;
			}
		}
		else															//如果返回为false，说明是平年，平年最大28号
		{
			if (month == 2 && day == 29)								//同样的，平年如果day++自加后是29
			{
				day = 1;												//那么就到3月，同上
				month++;
			}
		}
		if (day > 31)													//如果day自加后大于31
		{
			if (month == 12)											//并且是年底12月，那么日期和月数都是1，年份自加就行
			{
				day = 1;
				month = 1;
				year++;
			}
			else														//其他月就直接加1
			{
				day = 1;
				month++;
			}
		}
		else if (day == 31)												//如果前面不满足，day刚好自加到31
		{
			if (month == 4 || month == 6 || month == 9 || month == 11)	//视为月份为4、6、9、11的情况，直接月份加1
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
	cout << "输入日期，空格键隔开" << endl;
	cin >> y >> m >> d;
	Date date;
	date.SetDate(d,m,y);
	cout << "输入的日期是：" << endl;
	date.DisplaySetDate();
	cout << "输入的日期+1是：" << endl;
	date.AddDate();
	date.DisplaySetDate();
	cout << "程序已经结束，";
	system("pause");
}
