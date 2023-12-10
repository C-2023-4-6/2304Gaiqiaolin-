#include<iostream>
using namespace std;
void _swap(float &ip, float &op) {
	float  ppp = ip;
	ip = op;
	op=ppp;
	return ;
}
int main()
{
	float a[10];
	cout << "ÇëÊäÈë10¸öÊý×Ö" << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < 9; j++) 
	{
        for (int j=0; j < 9; j++) 
		{
			if (a[j] > a[j + 1])
			{
				_swap (a[j], a[j + 1]);
			}

		}
	}
	for (int j = 0; j < 10; j++)
	{
		cout << a[j] << '\t';
	}
	return 0;
}