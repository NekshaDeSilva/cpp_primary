#include <iostream>
#include <iomanip>
#include <string>
#include <deque>
using namespace std;
//THIS IS THE EXAMPLE FOR SHOWING THE PASS BY VALUE In C++
void somefunction(int passbyvalue);
int main(){
    srand(0);
    int randVal = rand() * 1;

    somefunction(randVal);
    cout << "In pass by value, the original variable values remain unchanged. So, only a copy of the original value is passed to the formal parameter." << endl;
    cout << "Original value = "<< randVal << endl;

}
void somefunction(int passbyvalue){
    cout << "The passed copy of value X 10 is = " << passbyvalue*10 << endl;

}
//THIS IS THE EXAMPLE FOR SHOWING THE PASS BY REFERENCE In C++ That changes the original value sent to that specific function.


void functionref(string &refavlue);
int main(){
    int dynamic_value =4;  //Watch this 
    functionref(45); //Then the original value will be changed
}
void functionref(string &refvalue){
    cout << "Received the value of the original value as " << refvalue << "Then we're going to change it by multiplying with 10" << endl;
}