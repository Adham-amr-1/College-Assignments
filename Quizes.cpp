/*
1) 
Write a function that swap 2 numbers Using this function 
make a program to sort 3 numbers which the biggest is a then b then c 
using pointers
*/

#include <iostream>
using namespace std;
void swap(int*, int*);
int main() {
	int a, b, c;
	cout << "Enter 3 Numbers: ";
	cin >> a >> b >> c;
	if (a > b) { swap(&a, &b); }
	if (a > c) { swap(&a, &b); }
	if (b > c) { swap(&b, &c); }

	cout << a << " " << b << " " << c;

	return 0;
}
void swap(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
//********************************************

