#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "请输入数组元素个数" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "请输入数组的元素" << endl;
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (p[j] > p[j + 1]) {
				int temp;
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
	cout << "排序后这样子的" << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i]<<'\t';
	}
    delete p;
	return 0;
}
