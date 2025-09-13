#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

using namespace std;

int main(){
    
    int number  = 89898;
    int* location = &number;

    //now let's print the variable value and where that varible stored in.
    cout << number << endl;
    cout << location << endl;

    //This address location can be also obtained via an instant method:
    cout << &number << endl;

    //To get the value stored in the pointer location via POINTER variable,
    cout << *location << endl;

}