#include <iostream>
using namespace std;
class CFZ {
private:
	double length;
	double width;
	double height;
public :
	CFZ() {
		cout << "请输入长方柱的长:" << endl;
		cin>> length;
		cout << "请输入长方柱的宽:" << endl;
		cin>> width;
		cout << "请输入长方柱的高:" << endl;
		cin >> height;
	}
	double TJ() {
		return length * width * height;
	}
};
int main() {
	CFZ a;
	cout<<"长方柱的体积是：" << a.TJ();
	return 0;
}