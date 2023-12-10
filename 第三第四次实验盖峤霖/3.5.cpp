#include<iostream>
using namespace std;
//时光倒流一天的桃子数量
int pear(int &t)
{
	t = (t + 1) * 2;
	return t;
}
int main() {
	int t = 1;
	for (int i = 0; i < 10; i++) {
		pear(t);
	}
	cout<<"第一天猴子共摘了" << t << "个桃子"<<endl;
}