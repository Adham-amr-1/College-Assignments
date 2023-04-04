
#include <iostream>
using namespace std;
void printnum(int n);
int main()
{
    printnum(0);
    cout << "Hello"<<endl;
    printnum(1);
    return 0;
}
void printnum(int n) {
    int i,k;

    for (i = 0; i < 4;i++) {
        for (k = 0; k < 6; k++) {
            cout << n + k;;
        }
        n++;
        cout << endl;
    }
}
//*******************************************
#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int a, b;
    cout << "Enter 2 Nmbers: ";
    cin >> a >> b;
    cout << fact(a) + fact(b);
    return 0;
}
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
//**********************************************************

#include <iostream>
using namespace std;
struct student {
    int id;
    float score;
    char gender;
};
void highest(student);
student readData() {
    student st;
    cout << "Enter Id: ";
    cin >> st.id;
    cout << "Enter Gender: ";
    cin >> st.gender;
    cout << "Enter Score: ";
    cin >> st.score;
    return st;
}

int main()
{
    student s1, s2, s3;

    s1 = readData();
    s2 = readData();
    s3 = readData();

    if (s1.score > s2.score && s1.score > s3.score) {
        highest(s1);
    }
    else if (s2.score > s3.score && s2.score > s1.score) {
        highest(s2);
    }
    else {
        highest(s3);
    }
    return 0;
}
void highest(student st) {
    cout << "The Highest Id Student: " << st.id<<endl;
    cout << "The Highest Gender Student: " << st.gender << endl;
}
\\ another one


#include <iostream>
using namespace std;
struct student {
    int id;
    float score;
    char gender;
};
void highest(student, student, student);
student readData() {
    student st;
    cout << "Enter Id: ";
    cin >> st.id;
    cout << "Enter Gender: ";
    cin >> st.gender;
    cout << "Enter Score: ";
    cin >> st.score;
    return st;
}

int main()
{
    student s1, s2, s3;

    s1 = readData();
    s2 = readData();
    s3 = readData();
    highest(s1, s2, s3);

    return 0;
}
void highest(student st1, student st2, student st3) {
    student max;

    if (st1.score > st2.score && st1.score > st3.score) {
        max = st1;
    }
    else if (st1.score < st2.score && st2.score > st3.score) {
        max = st2;
    }
    else {
        max = st3;
    }
    cout << "The Highest Id Student: " << max.id<<endl;
    cout << "The Highest Gender Student: " << max.gender << endl;
}
// Another one


#include <iostream>
using namespace std;
struct student {
    int id;
    float score;
    char gender;
};
student highest(student, student);
student readData() {
    student st;
    cout << "Enter Id: ";
    cin >> st.id;
    cout << "Enter Gender: ";
    cin >> st.gender;
    cout << "Enter Score: ";
    cin >> st.score;
    return st;
}

int main()
{
    student s1, s2, s3 , temp, temp2;

    s1 = readData();
    s2 = readData();
    s3 = readData();

    temp = highest(s1, s2);
    temp2 = highest(s3, temp);

    cout << "ID = " << temp2.id << endl;
    cout << "Gender = " << temp2.gender << endl;

    return 0;
}
student highest(student st1, student st2) {
    student max;

    if (st1.score > st2.score) {
        max = st1;
    }
    else {
        max = st2;
    }
    return max;
}
//*********************************************************************

#include <iostream>
using namespace std;
struct point {
    double x, y;
};
struct line {
    point p1, p2;
};
int main()
{
    line l1;
    double length, x_axis, y_axis;
    cout << "Enter (x1,y1) , (x2,y2): ";
    cin >> l1.p1.x >> l1.p1.y >> l1.p2.x >> l1.p2.y;
    x_axis = pow(l1.p2.x - l1.p1.x, 2);
    y_axis = pow(l1.p2.y - l1.p1.y, 2);
    length = pow(x_axis + y_axis, 0.5);
    cout << "Length = " << length;
    return 0;
}
//*************************************************



