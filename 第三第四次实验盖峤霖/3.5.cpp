#include<iostream>
using namespace std;
//ʱ�⵹��һ�����������
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
	cout<<"��һ����ӹ�ժ��" << t << "������"<<endl;
}