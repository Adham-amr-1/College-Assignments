/*
1. Write a program to read id (int) , score(float) ,and grade (char)
of 30 students using array of structure . The program will find and
print the id of these students who get score greater than or equal
50.
*/

#include <iostream>
using namespace std;
struct student {
	int id;
	float score;
	char grade;
};
student readData(student);
int main() {
	student st[30];
	int i;
	for (i = 0; i < 30; i++) {
		readData(st[i]);
	}
	cout << "The Student IDs that got Score >= 50 are: " << endl;
	for (i = 0; i < 30; i++) {
		if (st[i].score >= 50) {
			cout << st[i].id << endl;
		}
	}
		
	return 0;
}
student readData(student stu) {
	cout << "Enter The Student ID: ";
	cin >> stu.id;
	cout << "Enter The Student Score: ";
	cin >> stu.score;
	cout << "Enter The Student Grade: ";
	cin >> stu.grade;
	cout << "*******************************";
	return stu;
}



//****************************************************************************
/*
2. Write a program to read id (int) , gpa (float), gender (char) of 10
students using array of structure ,the program calculate the
following:
a) Sort the students descending according their gpa.
b) Find the highest gpa of males also the highest gpa of
females.
c) Find the average gpa of only males.
*/

#include <iostream>
using namespace std;
struct student {
	int id;
	float gpa;
	char gender;
};
int main() {
	student stu[10], temp;
	int i, totalmale = 0, maxidmale, maxidfemale;
	float gpaofmale = 0, average, maxmale, maxfemale;

	for (i = 0; i < 10; i++) {
		cout << "Enter Student " << i + 1 << " Id: ";
		cin >> stu[i].id;
		cout << "Enter Student " << i + 1 << " Gpa: ";
		cin >> stu[i].gpa;
		cout << "Enter Student " << i + 1 << " Gender: ";
		cin >> stu[i].gender;
	}
	//a
	for (i = 0; i < 9; i++) {
		if (stu[i + 1].gpa > stu[i].gpa) {
			temp = stu[i];
			stu[i] = stu[i + 1];
			stu[i + 1] = temp;
		}
	}
	for (i = 0; i < 10; i++) {
		cout << stu[i].gpa << " ";
		cout << stu[i].gender << " ";
		cout << stu[i].id << " ";
		cout << endl;
	}
	//b
	for (i = 0; i < 10; i++) {
		maxmale = 0, maxfemale = 0;
		if (stu[i].gender == 'm' || stu[i].gender == 'M') {
			if (stu[i].gpa > maxmale) {
				maxmale = stu[i].gpa;
				maxidmale = stu[i].id;
			}
		}
		else if (stu[i].gender == 'f' || stu[i].gender == 'F') {
			if (stu[i].gpa > maxfemale) {
				maxfemale = stu[i].gpa;
				maxidfemale = stu[i].id;

			}
		}
	}
	cout << "Maximum Of Male Gpa id : " << maxidmale << "  His Gpa is : " << maxmale << endl;
	cout << "Maximum Of FeMale Gpa id : " << maxidfemale << "  His Gpa is : " << maxfemale << endl;
	// c
	for (i = 0; i < 10; i++) {
		if (stu[i].gender == 'm' || stu[i].gender == 'M') {
			totalmale++;
			gpaofmale += stu[i].gpa;
		}
	}
	average = gpaofmale / totalmale;
	cout << "Average Of Male Gpa: " << average;

	return 0;
}
//******************************************************************************************************************

/*
3. Define a structure named point which have two values x,y.
Then, define another structure named line which has two points.
Finally, write a program that read a line and print its length.

*/

#include <iostream>
#include <math.h>
using namespace std;
struct point {
	double x, y;
};
struct line {
	point p1, p2;
};
int main() {
	line Myline;
	double result, xLine, yLine;
	cout << "Enter The X & Y Of the first Line: ";
	cin >> Myline.p1.x >> Myline.p1.y;
	cout << "Enter The X & Y Of the Second Line: ";
	cin >> Myline.p2.x >> Myline.p2.y;
	xLine = Myline.p1.x - Myline.p2.x;
	yLine = Myline.p1.y - Myline.p2.y;
	result = pow((xLine*xLine)+(yLine*yLine),0.5);

	cout << "The Length of the line is = " << result;
		
	return 0;
}

//******************************************************************************************************************
/*
6) Write a program to read in the employee data and search for a
specific employee using :
a) A function to read the employee data {emp_id, emp_name,
and emp_salary}. Done
b) Another search function that passes in an array of Employees ,
id and return if this id is found in array of employees or not.
c) A main function to enter data of 20 employees then send it
to search function and id to search for it in employees.
*/

#include <iostream>
using namespace std;
struct employee {
	int id;
	float salary;
	string name;
};
employee dataread(employee);
void search(employee, int);
int main() {
	employee mowazafen[20];
	int i ,id;
	for (i = 0; i < 20; i++) {
		dataread(mowazafen[i]);
	}
		cout << "Enter the ID to search for: ";
		cin >> id;
		search(mowazafen, id);
		
	return 0;
}
employee dataread(employee mowazaf) {
	cout << "Enter The Employee Id: ";
	cin >> mowazaf.id;
	cout << "Enter The Employee name: ";
	cin >> mowazaf.name;
	cout << "Enter The Employee salary: ";
	cin >> mowazaf.salary;
	cout << "**********************************\n";
	return mowazaf;
}
void search(employee mowazaf[], int id) {
	int i;
	for (i = 0; i < 20; i++) {
		if (mowazaf[i].id == id) {
			cout << "This Id Exist";
			break;
		}
	}
	if (i == 20) {
		cout << "Doesn't exist";
	}
}



