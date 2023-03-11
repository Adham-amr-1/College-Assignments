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

// B •
#include <iostream>
using namespace std;
int arr[10],i;
void square();
int main() {
    for (i = 0; i < 10; i++) {
        cout << "Enter Array Number " << i + 1 << " :";
        cin >> arr[i];
    }
    square();
    return 0;
}
void square() {
    for (i = 0; i < 10; i++) {
        cout << "Square of " << arr[i] << " = " << arr[i]*arr[i] << endl;
    }
}
// C •
#include <iostream>
using namespace std;
int i;
void square(int*);
int main() {
    int arr[10];
    for (i = 0; i < 10; i++) {
        cout << "Enter Array Number " << i + 1 << " :";
        cin >> arr[i];
    }
    square(&arr[0]);
    return 0;
}
void square(int *p) {
    for (i = 0; i < 10; i++) {
        cout << "Square of " << *(p+i) << " = " << *(p+i) * *(p+i) << endl;
    }
}
/***************************************************************************************

/*
B)
Write a program to read 3 arrays [a,b,c] each array has 10 elements
and calculate the sum of every two arrays [a+b,b+c,a+c] using 3
functions read, add, print.
*/

#include <iostream>
using namespace std;
void read(int* ,int);
void sum(int*, int* ,int*,int);
void print(int*,int);
int i;
int main() {
    int a[10], b[10], c[10], res1[10], res2[10], res3[10];
    cout << "Enter The First Array: ";
    read(&a[0], 10);
    cout << "Enter The Second Array: ";
    read(&b[0], 10);   
    cout << "Enter The Third Array: ";
    read(&c[0], 10);
    sum(&a[0], &b[0], &res1[0],10);
    sum(&b[0], &c[0], &res2[0],10);
    sum(&a[0], &c[0], &res3[0],10);
    cout << "a + b" << endl;
    print(&res1[0],10);
    cout << "b + c" << endl;
    print(&res2[0],10);
    cout << "a + c" << endl;
    print(&res3[0],10);
    return 0;
}
void read(int* ptr1, int sz) {
    for (i = 0; i < sz; i++) {
        cin >> ptr1[i];
    }
}
void sum(int* ptr1, int* ptr2,int* ptres, int sz) {
    for (i = 0; i < sz; i++) {
       ptres[i] = ptr1[i] + ptr2[i];
    }
}
void print(int* finaly, int sz) {
    for (i = 0; i < sz; i++) {
        cout << finaly[i] << " ";
    }
    cout << endl;
}

/***************************************************************************************

/*
C) Write a program to call a function that print the reverse order of n
numbers.
*/

#include <iostream>
using namespace std;
void reverse(int*, int);
int i;
int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Array Elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverse(&arr[0], n);
    return 0;
}
void reverse(int* rev, int n) {
    cout << "Reversed Array: \n";
    for (i = (n - 1); i >= 0; i--) {
        cout << rev[i] << " ";
    }
}
/***************************************************************************************

/*
D) 
Write a C++ program that will prompt the user to input n integer
values. The program will display the smallest and greatest of those
values
*/

#include <iostream>
using namespace std;
void maxmin(int*, int);
int i;
int main() {
    int n;
    cout << "Enter Number Of Element in Array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter Numbers: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    maxmin(&arr[0], n);
    delete[] arr;
    return 0;
}
void maxmin(int* ptr, int sz){
    int max = ptr[0], min = ptr[0];
    for (i = 0; i < sz; i++) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
        if (ptr[i] < min) {
            min = ptr[i];
        }
    }
    cout << "Max Of Numbers: " << max << endl;
    cout << "Min Of Numbers: " << min << endl;
}



