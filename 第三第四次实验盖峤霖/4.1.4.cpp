#include<iostream>
using namespace std;
void _swap(int& ip, int& op) {
	int  ppp = ip;
	ip = op;
	op = ppp;
	return;
}
int main()
{   //录入两个数组
	int q, w;
	int m[80], n[80];
	cout << "Enter list 1" << endl;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> m[i];
	}
	cout << "Enter list 2" << endl;
	cin >> w;
	for (int i = 0; i < w; i++)
	{
		cin >> n[i];
	}
	//合二为一
	int a[160];
	for (int i = 0; i < q; i++)
	{
		 a[i]=m[i];
	}
	for (int i = q; i < q+w; i++)
	{
		a[i] = n[i-q];
	}
	

	//排序
	
	for (int j = 0; j < q+w-1; j++)
	{
		for (int j = 0; j < q+w-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				_swap(a[j], a[j + 1]);
			}

		}
	}
	for (int j = 0; j < q+w; j++)
	{
		cout << a[j] << '\t';
	}
	return 0;
}