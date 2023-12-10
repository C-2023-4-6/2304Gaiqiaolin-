#include<iostream>
using namespace std;
int main() {
	int a[10];
	int t;
	int zs=10;
	cout << "Enter ten number"<<'\n';
	for (int i = 0; i < zs; i++) {
		cin >> t; 
		int r = 0;
		for(int n=0;n<10;n++){
			if (t == a[n]) { r = 1; break; }
		}
	if(r==0){ a[i] = t; }
	if (r == 1) { i--; zs--; }
		}
	cout << "The distinct numbers are:";
	for (int i = 0; i < zs; i++) {
		cout << a[i]<<'\t';
	}
	
}