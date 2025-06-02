#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main(){
    //For nonzero values standing alone with conditons, it always return a true;
    int somevalue  = 7;
    if(7){
        cout << "The '7' printed here because the 7 is a non zero value, so, all nonzero values are counted as [true] then the if condition gave that output. \nImpressive right" << endl;

    }
    //The switch statement will only work for INTEGER and CHAR only.
    string nonChar = "10";
    float nonChar1 = 21.92;
    //REFERENCE_FOR_BEGINNERS: float variables are designed to hold values with decimal points, such as 3.14, -0.5, or 123.456.
    switch (nonChar) {
        case 10 .. 30:
        cout << "This will not be executed because the program has an error in it." << endl;
        break;

    }
    //Correct usage:
    int charOrInt = 1;
    char charorint = 'U';
    switch (charorint) {
        case 'U':
        cout << "This will be printed because there are allied data types such as charorint or charOrInt" << endl;
        break;
        
    }

}

