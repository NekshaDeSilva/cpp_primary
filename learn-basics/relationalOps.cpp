#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main(){
    int lower = 100;
    int higher = 100;
    cout << "The 100 to 300 range is: " << (lower == higher) << endl;
    //it output [1] if the relational operators call is true. 
    //Here, the 100 is similar to 100, so the output should be defined as "1"
    

    //not equal function 
    int operand1 = 100;
    int operand2 = 500;
    string yesno;

    cout << "operant1: " << operand1 << "\n" << "operand2:" << operand2 << endl;
    cout << "do you like to test wheather operand1 is either equal or not equal to operand2??" << endl;
    getline(cin, yesno);
    if(yesno == "yes"|| "YES"|| "Yes"|| "yEs" || "yeS"|| "yEs"){
        int result  = operand1 ==! operand2;
        
        if(result == 0){
            return 'no';

        }else{
            return 'yes';
        }
        cout << "is operand1 and operand2 are either equal or not euqal each other?" << (operand1 ==! operand2) << endl;

    }else{
        cout << "then go and tell your mommy" << endl;
        
    }

    //NOTE :: RELATIONAL EXPRESSIONS SHOULD BE WRITTEN INSIDE ROUND BRACKETS. ()
}