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


