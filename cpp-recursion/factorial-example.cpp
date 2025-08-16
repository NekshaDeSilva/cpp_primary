#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int factorializable_numaric= 6;
    int factorial = 0;
    for (int i = factorializable_numaric; i < factorializable_numaric > 0;  i--){
        factorial *= factorializable_numaric;
        
    }
    return factorial;
}