// Recrusion

/*
1) Write a program to calculate a!without using any loop
*/
#include <iostream>
using namespace std;
int madrob(int);
int main()
{
	int a;
	cout << "Enter a Number: ";
	cin >> a;
	cout << "The Factrorial of " << a << " = " << madrob(a);

	return 0;
}
int madrob(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * madrob(n - 1);
}

//*************************************************************************

/* 
2) Write a program to culculate term number n from the series 1, 1, 2, 3, 5, 8, 13, .....
*/ 
#include <iostream>
using namespace std;
int series(int);
int main()
{
	int a;
	cout << "Enter a Number: ";
	cin >> a; 
	cout << "The Term Number " << a << " in The Series = " << series(a);
	return 0;
}
int series(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return series(n - 1) + series(n - 2);
	}

}

//*************************************************************************

/* 
3) Write a program to solve Hanoii tower problem for n plates
*/ 
#include <iostream>
using namespace std;
void plates(int, char, char, char);
int main()
{
	int a;
	cout << "Enter a Number: ";
	cin >> a; 
	plates(a, 'A', 'B', 'C');
	return 0;
}
void plates(int n, char x, char y, char z) {
	if (n == 1) {
		cout << x << " -----> " << y << endl;
	}
	else {
		plates(n - 1, x, z, y);
		cout << x << " -----> " << y << endl;
		plates(n - 1, y, x, z);

	}
}


//*************************************************************************

// structs & class

/* 
1)
- Define a structure student which has 3 data members: id(int),
   score (float), and gender(char).
- Then write a program to read data of 3 students
   and print the id and gender of the student with bigest score
- Do not use any loop

*/ 
#include <iostream>
using namespace std;
struct student {
	int id;
	float score;
	char gender;
};
student readData();
void highest(student);
int main()
{
	student s1, s2, s3;
	s1 = readData();
	s2 = readData();
	s3 = readData();
	if (s1.score > s2.score) {
		if (s1.score > s3.score) {
			highest(s1);
		}
		else {
			highest(s3);
		}
	}
	else {
		if (s2.score > s3.score) {
			highest(s2);
		}
		else {
			highest(s3);
		}
	}
	return 0;
}
student readData() {
	student st;
	cout << "Enter The Id: ";
	cin >> st.id;
	cout << "Enter The Score: ";
	cin >> st.score;
	cout << "Enter The Gender: ";
	cin >> st.gender;
	return st;
}
void highest(student stu) {
	cout << "The Highest Score Is: " << stu.score << endl;
	cout << "The Highest Score ID Is: " << stu.id << endl;
}

//*************************************************************************

/* 
2)
- Define a structure point, which has two float numbers x,y
- Define a class called line which has 2 data members of type points
- The class has  function members: calculate_length
- read_data , set_data, get_p1, get_p2, print_data,
  , The initial values for x1,y1,x2,y2 = 0.
    Then write a program to make two lines, set first line
   data (line1) to be 10,10, 40, 50
   Read second line (line2) data from the user.
   Print which line is longer.
*/ 
#include <iostream>
#include <math.h>
using namespace std;
struct point {
	float x, y;
};
class line {
private:
	point p1, p2;
	double length;
public:
	line() {
		p1.x = 0;
		p1.y = 0;
		p2.x = 0;
		p2.y = 0;
	}
	void readData() {
		cout << "Enter The first Point (x,y): ";
		cin >> p1.x >> p1.y;
		cout << "Enter The second Point (x,y): ";
		cin >> p2.x >> p2.y;
	}
	void setpoint1(double x1,double y1, double x2, double y2) {
		p1.x = x1;
		p1.y = y1;
		p2.x = x2;
		p2.y = y2;
	}
	point getp1() {
		return p1;
	}
	point getp2() {
		return p2;
	}
	void printData() {
		cout << p1.x << endl;
		cout << p1.y << endl;
		cout << p2.x << endl;
		cout << p2.y << endl;
	}
	double calcLength() {
		int x_axis = pow(p1.x - p2.x, 2);
		int y_axis = pow(p1.y - p2.y, 2);
		length = pow(x_axis + y_axis, 0.5);
		return length;
	}	
};
int main()
{
	line l1, l2;
	
	l1.setpoint1(10, 10, 40, 50);
	l2.readData();
	cout <<"Data Of The First Line Is: " << endl;
	l1.printData();
	cout << "Data Of The Second Line Is: " << endl;
	l2.printData();
	if (l1.calcLength() > l2.calcLength()) {
		cout << "Line 1 Is The Longest";
	}
	else if(l1.calcLength() < l2.calcLength()){
		cout << "Line 2 Is The Longest";
	}
	else {
		cout << "The Two Line Are Equal";
	}
	return 0;
}


//*************************************************************************


