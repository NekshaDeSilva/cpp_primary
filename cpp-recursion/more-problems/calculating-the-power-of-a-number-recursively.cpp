#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

using namespace std;

int power(int number, int exponent){
    if(exponent == 0){
        return 1;
    }else{
      

        return number * power(number, exponent -1);//IF WE ADD ***exponent--*** here, it will lead to a segmentaion fault because it will lead to a error. The reason is when we use ***exponent--*** it doesnt actiually update the value of the exponent.

    }
}

int main(){
    cout << "Power of the number generator" << endl;
    cout << "\n Please enter your number to see the power" << endl;
    string number;
    getline(cin, number);
    int numberconv = stoi(number);
    cout << "Please the number of times you want to exponent the number." << endl;
    string exponent; 
    getline(cin, exponent);
    int exponentconv = stoi(exponent);
    cout << number << " To the power " << exponent << " is,  " << power(numberconv, exponentconv) << endl;

}