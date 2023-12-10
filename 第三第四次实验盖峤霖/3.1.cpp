#include <iostream>
using namespace std;

//最大公约数函数
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
//最小公倍数函数
int gbs(int& m, int& n) {
	return m * n / gys(m, n);
}
int main() {
	int m, n;
	cout << "请输入两个数" << endl;
	cin >> m >> n;
	int gys_result=gys(m, n);
	cout << "这两个数的最大公约数是" << gys_result << endl;
	int gbs_result = gbs(m, n);
	cout << "这两个数的最小公倍数是" << gbs_result << endl;
	return 0;
}