/*
1. Write 2 functions to calculate factorial of any number.The first
function uses a loop, and the second function uses recursion.Then
write a program to calculate : a!+ b!- c!
*/
// a. using loop
#include <iostream>
using namespace std;
int facto(int);
int main() {
	int n;
	cout << "Enter a Number: ";
	cin >> n;
	cout << "Factorial of " << n << " = " << facto(n);
	return 0;
}
int facto(int n) {
	int i, res = 1;
	for (i = n; i > 0; i--) {
		res *= i;
	}
	return res;
}
// b. using recursion
#include <iostream>
using namespace std;
int facto(int);
int main() {
	int n;
	cout << "Enter a Number: ";
	cin >> n;
	cout << "Factorial of " << n << " = " << facto(n);
	return 0;
}
int facto(int n) {
	if (n > 0) {
		return n * facto(n - 1);
	}
	else {
		return 1;
	}
}
