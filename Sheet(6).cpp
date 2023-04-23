/*
2) Create a class called vehicle that has the manufacturer’s id and number of cylinders 
in the engine. Then, create a class called truck that is derived from vehicle and has the
following additional proprieties (load capacity in tons (type double) and towing capacity 
in pound (type double)). Be sure that your class has constructor, setter and getter method.
Write a program to test all your methods.
*/
#include <iostream>
using namespace std;
class vehicle {
protected:
    int idCylinder, numberCylinder;
public:
    vehicle() {
        idCylinder = 0;
        numberCylinder = 0;
    }
    void setId(int id) {
        idCylinder = id;
    }
    void setNumber(int num) {
        numberCylinder = num;
    }
    int getId() {
        return idCylinder;
    }
    int getNumber() {
        return numberCylinder;
    }
};
class truck : public vehicle {
private:
    double capacityTons, towingTon;
public:
    truck() {
        capacityTons = 0.0;
        towingTon = 0.0;
    }
    void setcapacity(double CT) {
        capacityTons = CT;
    }
    void settowing(double TT) {
        towingTon = TT;
    }
    double getcapacity() {
        return capacityTons;
    }
    double gettowing() {
        return towingTon;
    }
};
int main() {
    vehicle vc;
    truck tu;
    vc.setId(30);
    vc.setNumber(25);
    cout << vc.getId() << endl;
    cout << vc.getNumber() << endl;
    tu.setcapacity(1.2);
    tu.settowing(0.9);
    tu.setId(60);
    tu.setNumber(40);
    cout << tu.getId() << endl;
    cout << tu.getNumber() << endl;
    cout << tu.getcapacity() << endl;
    cout << tu.gettowing() << endl;

    return 0;
}
