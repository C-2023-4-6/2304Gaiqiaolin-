#include<iostream>
using namespace std;
int main() {
	float F;
	cout << "请输入华氏温度" << endl;
	cin >> F ;
	double C = (F - 32) / 1.8;
	double rounded_C = round(C * 100) / 100;
	cout << "该华氏温度转化成的摄氏温度为" << rounded_C << endl;
}