#include<iostream>

using namespace std;
bool is_prime(int &num) {
	int i;
	for (i = 2; i < num; i++) {
		if ((num % i) == 0) { return false; break; }
		}
	if (i == num)
	{
		return true;
	}
		
}
int main() {
	int i,t=0,z=0;
	for (i = 2; z < 200; i++) {
		if (is_prime(i) == 1) {
			z++;
			cout << i<<'\t';
			t++;
			if (t % 10 == 0) { cout << '\n' << endl; }
		}
	}
	return 0;
}