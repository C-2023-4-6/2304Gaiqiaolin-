#include <iostream>
using namespace std;

//���Լ������
int gys(int& m, int& n) {
	if (m < n) {
		gys(n, m);
	} 
	else {
		int t = m % n;
		if (t == 0) {
			return n;
		}else
		gys(m, t);
	}
}
//��С����������
int gbs(int& m, int& n) {
	return m * n / gys(m, n);
}
int main() {
	int m, n;
	cout << "������������" << endl;
	cin >> m >> n;
	int gys_result=gys(m, n);
	cout << "�������������Լ����" << gys_result << endl;
	int gbs_result = gbs(m, n);
	cout << "������������С��������" << gbs_result << endl;
	return 0;
}