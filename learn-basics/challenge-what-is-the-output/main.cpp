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
    //The importance of using the break stement in cpp switch.
    //If we dont use the break statement in C++, the statements which after the correct statement will also be executed and they'll be shown with also with the correct answer.
    //example:
    int somevalues_dec = 96.9;
    switch (somevalue) {
        case 20 ... 50:
        cout << "You are failed!" << endl;
        break;
        //The above shows the correct method of using the switch cases with the proper usage of break statements;
        case  80 ... 120:
        cout << "You've got an A pass! very good!" << endl;
        case 130 ... 2000:
        cout << "You've got an A+! well done!!" << endl;
        default:
        cout << "You're not legble to ask about marks, you're either not attempted or cheated;" << endl;
        
    }
    //Whatr will be the answer? YES, the answr is:
    /* You've got an A pass! very good!
       You've got an A+! well done!!
       You're not legble to ask about marks, you're either not attempted or cheated;*/
    
    //This is because after the case 80 ... 120 , the case has got no breaks, so it has executed the all statemnts until the whole switch funtion is gonna be closed.
    
}



