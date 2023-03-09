/*
1)Write a program to read ten numbers from a user and store them in
array called a then call a function to calculate the square of each
number.
• By calling function 10 times.
• By calling function only one time using global variable.
• By calling function only one time using pointer.
*/
// A.
#include <iostream>
using namespace std;
int square(int);
int main() {
    int arr[10], i;
    for (i = 0; i < 10; i++) {
        cout << "Enter Array Number " << i + 1 << " :";
        cin >> arr[i];
    }
    for (i = 0; i < 10; i++) {
        cout << "Square of " << arr[i] << " = " << square(arr[i]) << endl;
    }
    return 0;
}
int square(int n) {
    return n * n;
}
