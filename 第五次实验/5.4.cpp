#include <iostream>
using namespace std;
//MAX����
int MAX( const int *a, const int size) {
	int maxIndex = 0;  // �����һ��Ԫ��������
	for (int i = 1; i < size; i++) {
		// ����ҵ�����������������ֵ������
		if (a[i] > a[maxIndex]) {
			maxIndex = i;
		}
	}
	return maxIndex;
}
//ѧ������
class Student {
private :
	int num;
	int score;
public :
	void cinNum(int num);
	void cinScore(int score);
	int getNum() { return this->num;}
	int getScore() { return this->score;}
};
void Student:: cinNum(int num) {
	this->num = num;
}
void Student::cinScore(int score) {
	this->score = score;
}
int main(){
	Student s[5] = {};
	for (int i = 0; i < 5; i++) {
		cout << "�������" << i+1 << "��ͬѧ��ѧ��" << endl;
		int num;         cin >> num;
		s[i].Student::cinNum(num);
	    cout << "������Ta�ķ���" << endl;
		int score;       cin >> score;
		s[i].Student::cinScore(score);
    }
	int  a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = s[i].getScore();
	}
	int q = MAX(a, 5);
	cout << "�ɼ�����ߵ�ѧ����" << s[q].getNum();
	return 0;
}