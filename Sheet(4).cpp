


/****************************************************************************
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


