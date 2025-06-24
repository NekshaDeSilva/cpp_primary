#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

    //There are two types of scopes in a program. 
    //Local scopes and a global scope


    string globe = "Earth"; //Global variable
    int getNumberPeople(){
        long long int count = 800000000; //local variable. This will only available inside the getNumberPeople() fucntion.
        return count;

    }
    int main(){
        string continent = "America"; //Another local variable. Will be only available inside the main() function scope.
        int numberoflives = getNumberPeople();
        for(int i = 1; i < numberoflives; i++){
            cout << "You are the " << numberoflives << " person in the " << continent << " in the planet of " << globe << endl;
        }
    }
