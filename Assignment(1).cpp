/*
1. Write A program to print numbers from 1 to n without any loop
*/
#include <iostream>
using namespace std;
void printN(int);
int main() {
	int n;
	cout << "Enter Number: ";
	cin >> n;
	printN(n);
	return 0;
}
void printN(int n) {
	if (n == 1) {
		cout << 1 << " ";
	}
	else {
		printN(n - 1);
		cout << n << " ";
	}
}
//***************************************
/*
2. Write A program to Sum numbers from 1 to n with recrusion
*/
#include <iostream>
using namespace std;
int sum(int);
int main() {
	int n;
	cout << "Enter Number: ";
	cin >> n;
	cout << sum(n);
	return 0;
}
int sum(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + sum(n - 1);
	}
}
