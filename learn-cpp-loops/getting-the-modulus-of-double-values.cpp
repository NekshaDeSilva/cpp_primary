#include <iostream>
#include <iomanip>
#include <cmath>

using  namespace std;
 int main(){
    double i = 7549.9383583;
    //Using the setprecision method, you will be able to get any number of decimal places as well.
    cout << setprecision(12) << i << endl;
    //to get the modulus of doubloe values, since % is obnly usable for int values, we have to include the <cmath> library and then use fmod('numerator', 'denominator') methdod.
    int themodulusofdouble = fmod(i, 2);
    //so we have to look wheather this number shows the remainder.
    cout << themodulusofdouble << endl;
    //so we got the modulus as 0.
}

