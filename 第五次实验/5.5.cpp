#include <iostream>
using namespace std;
class HS {
private:
	double x,y;
public:
	HS() { 
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};
int main() {
	HS a;
	a.setPoint(50, 60);
	a.display();
}