#include <iostream>
using namespace std;
class CFZ {
private:
	double length;
	double width;
	double height;
public :
	CFZ() {
		cout << "�����볤�����ĳ�:" << endl;
		cin>> length;
		cout << "�����볤�����Ŀ�:" << endl;
		cin>> width;
		cout << "�����볤�����ĸ�:" << endl;
		cin >> height;
	}
	double TJ() {
		return length * width * height;
	}
};
int main() {
	CFZ a;
	cout<<"������������ǣ�" << a.TJ();
	return 0;
}