#include <iostream>
#include "Fraction.h"
using namespace std;


int main()
{
	Fraction a1 = { 1,5 };
	cout << a1.getNumerator() << "/" << a1.getDenominator() << endl;
	a1.showFraction();
	a1.setNumerator(10);
	a1.setDenominator(20);
	a1.showFraction();
	Fraction d1 = { 5,2 };
	a1.multiplicationFraction(d1);
	a1.showFraction();
	a1.divisionFraction(d1);
	a1.showFraction();
	Fraction c1 = { 3,4 };
	c1.addFraction(d1);
	c1.showFraction();
	d1.showFraction();
	Fraction c2 = { 10,1 };
	c2.minusFraction(d1);
	c2.showFraction();
	Fraction c3 = { 9, 3 };
	Fraction q;
	q.multiplicationFraction(c3, d1);
	q.showFraction();
	q.divisionFraction(c3, d1);
	q.showFraction();
	q.addFraction(c3, d1);
	q.showFraction();
	q.minusFraction(c3, d1);
	q.showFraction();
	return 0;
}