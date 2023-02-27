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
//*****************************************************************************

/*
2. Write a program to count and print number of zeros in an integer
number which will entered by the user using recursion.
*/
#include <iostream>
using namespace std;
int zeros(int);
int main() {
	int n;
	cout << "Enter a Number: ";
	cin >> n;
	cout << "Number Of Zeros in " << n << " = " << zeros(n);
	return 0;
}
int zeros(int n) {
	int counter = 0;
	if (n == 0) {
		return 1;
	}
	if (n % 10 == 0) {
		counter++;
	}
	if (n / 10 == 0) {
		return counter;
	}
	return counter + zeros(n / 10);
}
//*****************************************************************************

/*
3. Write a program to print the numbers from n to 1 without using any
loop.
*/
#include <iostream>
using namespace std;
void counter(int);
int main() {
	int n;
	cout << "Enter a Number: ";
	cin >> n;
	cout << "Counter from " << n << " To 0 : \n" ;
	counter(n);
	return 0;
}
void counter(int n) {
	if (n == 0) {
		return ;
	}
	else {
		cout << n << "  ";
		counter(n - 1);
	}
}
//*****************************************************************************

/*
4. Write a function to calculate the n power m using
a • Loop
b • Recursion
*/
// a •
#include <iostream>
using namespace std;
int pow(int,int);
int main() {
	int n, m;
	cout << "Enter 2 Numbers (The Second Is The power of the first): ";
	cin >> n >> m;
	cout << "The Result = " << pow(n, m);
	return 0;
}
int pow(int n, int m) {
	int i, res = 1;
	for (i = 0; i < m; i++) {
		res *= n ;
	}
	return res;
}

// b •
#include <iostream>
using namespace std;
int pow(int,int);
int main() {
	int n, m;
	cout << "Enter 2 Numbers (The Second Is The power of the first): ";
	cin >> n >> m;
	cout << "The Result = " << pow(n, m);
	return 0;
}
int pow(int n, int m) {
	if (m == 0) {
		return 1;
	}
	else {
		return n * pow(n, (m - 1));
	}
}
//*****************************************************************************

/*
5. Write a program to add numbers from 1 to 1000 using recursion.
*/
// b •
#include <iostream>
using namespace std;
int sum(int);
int main() {
	cout << "Summtion from 1 to 1000 = " << sum(1000);
	return 0;
}
int sum(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + sum(n-1);
	}
}
//*****************************************************************************

/*
5. Write 3 functions to print the first 20 terms of the Fibonacci series
0,1,1,2,3,5,8,….. using
• Loop only
• Array and Loop
• Recursion
*/

// a •
#include <iostream>
using namespace std;
void Fibo();
int main() {
	cout << "the first 20 terms of the Fibonacci series : \n";
	Fibo();
	return 0;
}
void Fibo() {
	int i, a = 0, b = 1, c;
	cout << a << " " << b << " ";
	for (i = 2; i < 20; i++) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
}

// b •
#include <iostream>
using namespace std;
void Fibo();
int main() {
	cout << "the first 20 terms of the Fibonacci series : \n";
	Fibo();
	return 0;
}
void Fibo() {
	int i, arr[20];
	arr[0] = 0;
	arr[1] = 1;
	cout << arr[0] << " " << arr[1] << " ";
	for (i = 2; i < 20; i++) {
		arr[i] = arr[i-1] + arr[i-2];
		cout << arr[i] << " ";
	}
}

// b •
#include <iostream>
using namespace std;
void Fibo(int c, int a = 0, int b = 1) {
	if (c == 0) {
		return;
	}
	else {
		cout << a << " ";
		Fibo(c - 1, b, a + b);
	}
}
int main() {
	cout << "the first 20 terms of the Fibonacci series : \n";
	Fibo(20);
	return 0;
}





