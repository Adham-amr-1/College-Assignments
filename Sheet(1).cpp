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




