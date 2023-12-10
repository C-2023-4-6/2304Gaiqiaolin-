#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	    int l1;
	for( l1=0;s1[l1]!='\0'; l1++ ){}
		int l2;
	for( l2= 0; s2[l2] != '\0'; l2++){}
	if (l1 > l2) { return -1; }
	else {
		for (int i = 0; i < l2; i++) {
			int j = 0;
			for ( j = 0; j < l1; j++) {
				if (s1[j] != s2[i + j]) {
					break;
				}
			}
			if (j == l1) { return i; }
		}return -1;
	}
}
int main() {
	string s1;
	string s2;
	cout << "ÊäÈë×Ö·û´®s1:";
	
		cin >> s1;
	
	cout << "ÊäÈë×Ö·û´®s2:";
	cin >> s2;
	
	cout << indexof(s1.c_str(), s2.c_str());
		
		return 0;
}