#include <iostream>
using namespace std;
//MAX函数
int MAX( const int *a, const int size) {
	int maxIndex = 0;  // 假设第一个元素是最大的
	for (int i = 1; i < size; i++) {
		// 如果找到更大的数，更新最大值的索引
		if (a[i] > a[maxIndex]) {
			maxIndex = i;
		}
	}
	return maxIndex;
}
//学生的类
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
		cout << "请输入第" << i+1 << "个同学的学号" << endl;
		int num;         cin >> num;
		s[i].Student::cinNum(num);
	    cout << "请输入Ta的分数" << endl;
		int score;       cin >> score;
		s[i].Student::cinScore(score);
    }
	int  a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = s[i].getScore();
	}
	int q = MAX(a, 5);
	cout << "成绩最高者的学号是" << s[q].getNum();
	return 0;
}