#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void  printingNumbers(int status =1, int start = 10){ 
    //IMPORTANT POINT: if if all paramaters have no default values, so, we have to recorder them accordingly.
    // If only status had a default value itnj it's originla fuction, so then what we have to do is, adding them to a order, as the parameter with the dfeault value has to be placed on the greater right side of the function.
    //In here, if a value is not provided, it gets the default value as 10 and counts 10 downto or upto.
    //In there the status means that when status is 1, is means we print numbers from n to N and when the status is 0, it means that we have to print those letters N downto n.
    if(start == 0){
        return;
    }else{
        cout << start << endl;
        start--;
        printingNumbers(0, start);

    }

}
// Obataining a factorial is another recursive method.

int makeitfactorial(int factorialNum) {
    if (factorialNum == 0 || factorialNum == 1)
        return 1; // base case
        factorialNum -=1;
    return factorialNum * makeitfactorial(factorialNum);
}
 int main(){
    cout << "Welcome to the countdown meter." << endl;
    cout << "Please enter the number you wanna start counting from" << endl;
    int inputnumber_as_the_startingpoint;
    cin >> inputnumber_as_the_startingpoint;
    printingNumbers(0,inputnumber_as_the_startingpoint);
    cout << "THE factorial of 10 is, " << makeitfactorial(10) << endl;

    return 0;

}


// DEMO: PASS BY VALUE:  IN PASS BY VALUES, WE ALSWAYS ADD THE PARAMEETR AS IN  THE NORMAL WAY: 

// PASS  by reference: we always add a & after the data type bacause it refers to the original value inhte main fucntion.

// So, we  can add the pass by   REFRENJCE AS FOLLOWS ;

/*   
        int somevalu||_ewithsoefucntion90(int& somevalue){
     
        }

        int main(){
     long long int somevalue = 99383;

        }     
*/