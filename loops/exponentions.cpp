#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    int number =2025;
    int gettedValue;

    for(int i = 1; i <2026; i++){

        gettedValue = number*i;


        

        cout << number << " x " << i << " is = " << number*gettedValue;
    }
}