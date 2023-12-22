#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:// 数据成员为四私用的
	int hour;
	int minute;
	int sec;
public:              
	void setTime () {      //输入设定的时间 
		cout << "Please cin the hour :";
		cin >> hour;   
		cout << "Please cin the minute :";
		cin >> minute;
		cout << "Please cin the second :";
		cin >> sec;
		cout << "The time you cin is: " << endl;
		cout<<hour << "：" << minute << "：" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.setTime();
	
	return 0;
}
