#include <iostream>
using namespace std;
#include "A.h"
int main() 
{
	cout << "Celsius" << '\t' << "Fahrenheit" << endl;

	for (double i = 40.0; i >= 31.0; i--)
	{
		cout << i << '\t' << celsius_to_fah(i) << endl;
	}
	cout << "Fahrenheit" << '\t' << "Celsius" << endl;
	for (double i = 120.0; i >= 30.0; i-=10.0)
	{
		cout << i << '\t' << fahrenheit_to_cels(i) << endl;
	}
	
	
	
	return 0;
}