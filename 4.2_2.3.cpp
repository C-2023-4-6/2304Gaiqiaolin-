#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "����������Ԫ�ظ���" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "�����������Ԫ��" << endl;
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
	cout << "����������ӵ�" << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i]<<'\t';
	}
    delete p;
	return 0;
}
