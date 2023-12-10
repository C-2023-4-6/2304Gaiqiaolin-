# include <iostream>
using namespace std;
//计字母个数并输出结果 函数
void count(const char s[]) {
	int counts[26] = { 0 };
	//确定字符串长度
	int len1;
	for (len1=0;s[len1] !='\0';len1++){}
	//定义字母表数组
	char abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l',
		'm','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char ABC[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L',
		'M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	//逐个判断
	for ( int j = 0; j < 26; j++)
	{
		for (int i = 0; i < len1; i++) {
			if (s[i] == abc[j] || s[i] == ABC[j]) {
				counts[j]++;
			}
		}
		//该字母不少于一个就输出
		if (counts[j]>0){
			cout << abc[j] << ":" << counts[j] << "times" << endl;
		}
	}
	
	
}
int main() {
	
	cout << "Enter a string:";
	string s1;
	cin >> s1;
	count(s1.c_str());
	return 0;
}