#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global variable - accessible anywhere in the program
string globe = "Earth";

int getNumberPeople(){
    // Local variable - only accessible in this function
    long long int count = 10; // Changed to a small number for demonstration
    return count;
}

int main(){
    // Local variable - only accessible in main()
    string continent = "America";
    int numberoflives = getNumberPeople();
    
    for(int i = 1; i <= 5; i++){
        // i is block-scoped - only accessible in this loop
        cout << "You are person #" << i << " out of " << numberoflives 
             << " people in " << continent << " on the planet " << globe << endl;
    }
    
    return 0;
}
