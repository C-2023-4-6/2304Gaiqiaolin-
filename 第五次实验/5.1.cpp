#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:// ���ݳ�ԱΪ��˽�õ�
	int hour;
	int minute;
	int sec;
public:              
	void setTime () {      //�����趨��ʱ�� 
		cout << "Please cin the hour :";
		cin >> hour;   
		cout << "Please cin the minute :";
		cin >> minute;
		cout << "Please cin the second :";
		cin >> sec;
		cout << "The time you cin is: " << endl;
		cout<<hour << "��" << minute << "��" << sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.setTime();
	
	return 0;
}
