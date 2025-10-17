#include <iostream>
#include <iomanip>
#include <string>
//PASSING FUNCIONS AND DECLARING FUNCTIONS AS POIINTERS IS A PERFECT WAY TO TO CALLBACKS AND STRATERGY PATTERNS.

using namespace std;
int calc(int a, int b){
    int result = a+b;
    return  result;


}

int (*cpalc)(int a, int b);
int main(){
    //The paentheses around the function pointer is important. 
    /*Ex:
            int (*ptrfunc) (int a, int b);
            
    
    */

    cpalc = calc;

    cout << "Calc" << endl;
    int fint, secint;
    
    cin >>  fint;


    cin >>  secint;
cout << "\n\n" << cpalc(fint, secint) << endl;


}
