/*
1. Define a class called Fraction. This class is used to represent a ratio of two integers.
Include setter functions that allow the user to set the numerator and the denominator.
Also include a member function that returns the value of numerator or denominator as a
double. Include an additional member function that outputs the value of the fraction
reduced to lowest terms (e.g., instead of outputting 20/60 the method should output 1/3).
This will require finding the greatest common divisor for the numerator and denominator,
then dividing both by that number. Embed your class in a test program.
*/

#include <iostream>
using namespace std;
class fraction {
private:
	int num, den;
public:
	fraction() {
		num = 0;
		den = 1;
	}
	void setnum(int n) {
		num = n;
	}
	void setden(int d) {
		den = d;
	}
	double getnum() {
		return num;
	}
	double getden() {
		return den;
	}
	void simplify() {
		int small;
		if (den > num) {
			small = num;
		}
		else {
			small = den;
		}
		while (small > 0) {
			if (num % small == 0 && den % small == 0) {
				num /= small;
				den /= small;
				break;
			}
			else {
				small--;
			}
		}
		cout << num << "/" << den;
	}
};
int main() {
	fraction frac;
	int nu, de;
	cout << "Enter the numerator: ";
	cin >> nu;
	frac.setnum(nu);
	cout << "Enter the denominator: ";
	cin >> de;
	frac.setden(de);
	cout << "The Numerator = " << frac.getnum() << "\nThe Denimonator = " << frac.getden() << endl;
	frac.simplify();
	return 0;
}
//*****************************************************************************************************
