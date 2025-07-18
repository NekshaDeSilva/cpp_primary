//The whole curated code showing the implementation of the <cmath> library one by one.
//Copyright (c) 2025 OpenRockets Open-source Network. Free to use copy, edit, share , publish, endrose
//Last edited 14:18 - 08/05/2025 by Neksha DeSilva. (https://www.github.com/nekshadesilva)
#include <cmath>
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;
int main(){
    //CMATH : findig the remainder with fmod()
    int cmath_mod_int1 = 10;
    cout << "The Modulus of " << cmath_mod_int1 << " is " << fmod(cmath_mod_int1, 2) << endl;
    //CMATH : finding the remainder with remainder()
    cout << "The remainder is " << cmath_mod_int1 << " divided by 3 is " << remainder(cmath_mod_int1, 3) << endl;
    cout << "\n\n" << endl;

    //CMATH : finding the absolute value of a integer/double/floating number
    //IN INTEGER
    int somevalue112 = -66;
    //to get the absoulte value, we need to use abs() function with it for integers.
    cout << "The absolute value of -66 is " << abs(somevalue112) << endl;
    //IN FLOAT
    float somevalue112_f = -67.444;
    cout << "The absolute value of -67.444 is " << fabs(somevalue112_f) << endl;
    //IN DOUBLE 
    float somevalue112_dbl = -898.59884;
    cout << setprecision(8) /*set the setprecision to show up the all decimals. */ << "The absolute value of -898.59884 is " << fabs(somevalue112_dbl) << endl;
    cout << "\n\n" << endl;

    //CMATH usage of PI
    double pi = M_PI;
    cout << setprecision(56) <<  pi << endl;
    
    //CMATH USAGE OF TRIGONOMETRY
    //Finding the sin value of something via usage if sin() fuintiuon
    double somevalue113_sin = 86.8;
    cout <<  setprecision(4) << "The sin value of " << somevalue113_sin << " is " << sin(somevalue113_sin) << endl;
    //Finding the cos value of something vaia usage of cos() function
    double somevaluetobe_cos = 43.87;
    cout << "The cos value of " << somevaluetobe_cos << " is " << cos(somevaluetobe_cos) << endl;
    //To find the tangent value;
    double somevaluetobe_tangent= 55.9;
    cout << "The tangent value of " << somevaluetobe_tangent << " is " << tan(somevaluetobe_tangent) << endl;
    



}