#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace  std;

int main(){
    //How to exponent something
    int value =  pow(4,5);
    cout << value << endl;


    //how to round up a decimal to its closest integer lower that it
    int value2 = floor(4.787348); //the answer should be 4
    cout << value2<< endl;

    //how to round up a decimal value to its closest  integer whcih is higher than that,
    int  value3  = ceil(4.35533); //the answr  should  be 5.
    cout <<  value3  <<  endl;

    //how  to get  the absolute value  of some mathematical exression done in cpp
    int value4 = abs(858-50); //shoudld output the integer values without considering about the  decimal places without rounding at all.
    cout << value4 << endl;

    //How  to get the remainder in a divisioin
    int value5 = 50%3; //shoudl output the value 2

    cout << value5 <<  endl;

}