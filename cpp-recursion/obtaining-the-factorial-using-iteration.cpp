#include <iostream>
#include <iomanip>
#include <string>

//This is for getting the factorial of a number using tyhe iteration and not the recursion.

using namespace std;
void goFactorial(int input);
int main(){
    cout << "Enter that number you wanna see the factorial." << endl;
    int value;
    
    cin >> value; //Us ethe reverse sided arrow operators
    goFactorial(value);
}
//Now let's define the function.
void goFactorial(int input){
    int output;
    for(int i = input-1; i < input; i--){
        input = input* i;
        if(i ==1){
           break;
        }
        
    }
    cout << input;
}