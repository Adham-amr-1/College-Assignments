/*
1.	Write a program that reads two integer numbers from a user and
call a function to add these two numbers and call another function
to sub these numbers using local and global variables.
*/
// using local variable
#include <iostream>
using namespace std;
void sum(int, int);
void sub(int, int);
int main()
{
    int x, y;
    cout << "Enter 2 Numbers: ";
    cin >> x >> y;
    sum(x,y);
    cout << endl;
    sub(x,y);
    return 0;
}
void sum(int a, int b) {
    cout << "Summition of the 2 numbers = " << a + b;
}
void sub(int a, int b) {
    cout << "Subtraction of the 2 numbers = " << a - b;
}
//*****************************************************************************

/*
1.	Write a program that reads two integer numbers from a user and
call a function to add these two numbers and call another function
to sub these numbers using local and global variables.
*/
// using global variable
#include <iostream>
using namespace std;
void sum(int, int);
void sub(int, int);
int x, y;
int main()
{
    cout << "Enter 2 Numbers: ";
    cin >> x >> y;
    sum(x,y);
    cout << endl;
    sub(x,y);
    return 0;
}
void sum(int x, int y) {
    cout << "Summition of the 2 numbers = " << x + y;
}
void sub(int x, int y) {
    cout << "Subtraction of the 2 numbers = " << x - y;
}
//*****************************************************************************

/*
2.	Write a program to read a positive number and then test the
number is prime or not using function.
*/
#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int n;
    cout << "Enter Positive Number: ";
    if (n > 0) {
        cin >> n;
        prime(n);
    }
    else {
        cout << "That's Negative Number or Undefined char";
    }
    return 0;
}

void prime(int a) {
    int i,count = 0;
    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            count++;
            break; 
        }
    }
    if (count == 0) cout << "Prime";
    else cout << "Not Prime";
}
//*****************************************************************************

/*
3.	Write a program to calculate the result of the following equation using two functions only
    ((3+4+5+6)/(9*11*13*15) - (7*10*13*…*19)/(10+15+20+…+40))
*/
#include <iostream>
using namespace std;
int sum(int, int, int);
int multi(int, int, int);
int main()
{
    float result;

    result = (sum(3, 6, 1)*1.0 / multi(9, 15, 2)) - (multi(7, 19, 3)*1.0 / sum(10, 40, 5));
    
    cout << "The Result = " << result;

    return 0;
}
int sum(int a, int b, int st) {
    int i, res = 0;
    for (i = a; i <= b; i += st) {
        res += i;
    }
    return res;
}
int multi(int a, int b, int st) {
    int i, res = 1;
    for (i = a; i <= b; i += st) {
        res *= i;
    }
    return res;
}
//*****************************************************************************

/*
4.	Write a program to add numbers from A to B using function 
note: user will enter values of A and B.
*/
#include <iostream>
using namespace std;
int allsumi(int, int);
int main()
{
    int num1, num2, sumi;
    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;
    sumi = allsumi(num1, num2);
    cout << "The Sum From " << num1 << " To " << num2 << " = " << sumi;

    return 0;
}
int allsumi(int a, int b) {
    int i, sum = 0;
    for (i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}
//*****************************************************************************

/*
5.	Write a program to print the following pattern using 2 functions

########
#######
######
#####
reverse
###
####
#####
again
#####
####
reverse
##
###

*/
#include <iostream>
using namespace std;
void pforward(int ,int );
void preverse(int ,int);
int main()
{	
	preverse(4, 8);
	cout << "Reverse" << endl;
	pforward(3, 5);
	cout << "Again" << endl;
	preverse(2,5);
	cout << "Reverse" << endl;
	pforward(2,3);

	return 0;
}
void pforward(int r, int c) {
	int i, k;
	for (i = r; i > 0 ; i--) {
		for (k = (i-1); k < c ; k++) {
			cout << "# ";
		}
		cout << endl;
	}
}
void preverse(int r, int c) {
	int i, k;
	for (i = 1; i <= r; i++) {
		for (k = (i-1); k < c; k++) {
			cout << "# ";
		}
		cout << endl;
	}
}
//*****************************************************************************

/*
6.	 Write a program to count and print number of zeros in an integer 
    number which will be entered by the user using a function.
*/
#include <iostream>
using namespace std;
int zeros(int);
int main()
{
    int num, result ;
    cout << "Enter Number: ";
    cin >> num;
    result = zeros(num);
    cout << "Number Of Zeros in " << num << " Is Equal: "<<result;

    return 0;
}
int zeros(int n) {
    int count = 0;
    while (n != 0) {
        if (n % 10 == 0) {
            count++;
        }
        n /= 10;

    }
    return count;
}





