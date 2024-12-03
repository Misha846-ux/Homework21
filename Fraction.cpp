#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int new_numerator, int new_denominator) {
	numerator = new_numerator;
	denominator = new_denominator;
}

void Fraction::setNumerator(int new_numerator) {
	numerator = new_numerator;
}

void Fraction::setDenominator(int new_denominator) {
	denominator = new_denominator;
}

void Fraction::multiplicationFraction(Fraction& factor) {
	numerator *= factor.numerator;
	denominator *= factor.denominator;
}

void Fraction::multiplicationFraction(Fraction& first_factor, Fraction& second_factor) {
	numerator = first_factor.numerator * second_factor.numerator;
	denominator = first_factor.denominator * second_factor.denominator;
}

void Fraction::divisionFraction(Fraction& factor) {
	numerator *= factor.denominator;
	denominator *= factor.numerator;
}

void Fraction::divisionFraction(Fraction& first_factor, Fraction& second_factor) {
	numerator = first_factor.numerator * second_factor.denominator;
	denominator = first_factor.denominator * second_factor.numerator;
}

void Fraction::addFraction(Fraction& term) {
	int cell = denominator;
	numerator *= term.denominator;
	denominator *= term.denominator;
	numerator += term.numerator * cell;
}

void Fraction::addFraction(Fraction& first_term, Fraction& second_term) {
	denominator = first_term.denominator * second_term.denominator;
	numerator = (first_term.numerator * second_term.denominator) + (second_term.numerator * first_term.denominator);
}

void Fraction::minusFraction(Fraction& term) {
	int cell = denominator;
	numerator *= term.denominator;
	denominator *= term.denominator;
	numerator -= term.numerator * cell;
}

void Fraction::minusFraction(Fraction& first_term, Fraction& second_term) {
	denominator = first_term.denominator * second_term.denominator;
	numerator = (first_term.numerator * second_term.denominator) - (second_term.numerator * first_term.denominator);
}

float Fraction::getNumerator() {
	return numerator;
}

float Fraction::getDenominator() {
	return denominator;
}

void Fraction::showFraction() {
	cout << numerator << '/' << denominator << endl;
}