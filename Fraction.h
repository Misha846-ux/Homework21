#pragma once
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int new_numerator, int new_denominator);
	void setNumerator(int new_numerator);
	void setDenominator(int new_denominator);
	void multiplicationFraction(Fraction& factor);
	void multiplicationFraction(Fraction& first_factor, Fraction& second_factor);
	void divisionFraction(Fraction& factor);
	void divisionFraction(Fraction& first_factor, Fraction& second_factor);
	void addFraction(Fraction& term);
	void addFraction(Fraction& first_term, Fraction& second_term);
	void minusFraction(Fraction& term);
	void minusFraction(Fraction& first_operator, Fraction& second_term);
	float getNumerator();
	float getDenominator();
	void showFraction();
};

