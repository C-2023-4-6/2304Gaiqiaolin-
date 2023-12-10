#include<iostream>
using namespace std;
int kg(int n) 
{
	switch (n)
	{
	    case 0: return 1; break;
	    case 1: return 0; break;
	}
	
}
int main() 
{
	int a[100] = { 0 };
	for (int i = 0; i < 100; i++)
	{
		for (int j = i; j < 100; j = j + i + 1)
		{
			a[j] = kg(a[j]);
		}
	}cout << "开着的箱子编号是：" << endl;
	for (int i = 0; i < 100; i++) {
		if (a[i] == 1) {
			cout << i + 1 << '\t';
		}
	}
}
