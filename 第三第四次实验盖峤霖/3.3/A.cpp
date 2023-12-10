#include"A.h"

double celsius_to_fah(double cel)
{
	cel = cel / 5 * 9 + 32;
	return cel;
	
}
double fahrenheit_to_cels(double fah) 
{

	fah = (fah - 32) * 5 / 9;
	return fah;

}