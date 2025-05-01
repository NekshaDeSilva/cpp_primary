#include <iostream>
using namespace std;
class Car{
    public: 
    string plate;
    int year;
    double price = 76.98;
    // Constructor

    void innerFunc(){
        int x = 3984849;
        cout << "inner function wqs called by neksha" << endl;
        cout << x << endl;

    }
};
int main(){
    Car myCar1;
    myCar1.plate = "CCC 0000";
    myCar1.year  = 2025;
    cout << "Car plate: " << myCar1.plate << endl;
    cout << "Car year: " << myCar1.year << endl;

    myCar1.innerFunc();
    return  0;
}
