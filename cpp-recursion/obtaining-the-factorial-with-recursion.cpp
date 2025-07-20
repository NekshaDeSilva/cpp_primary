//The factorial is the product(multiplication) of the all positive integers from n to 1. (which means n > x > 0)


#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int getFactorial(int initnum){
    if(initnum == 0 || initnum ==1){
        return 1; // This is the base case of the recursive program. and when it reaches to the 1 or 0, it the product came from the recursive part(else part) has to be multiplied by 1. and then the answwr will be gained. That's why putting a 1 at the end of the base case is important.
    }else{


        
        return initnum * getFactorial(initnum -1);

    }
}
int main(){
    
    int randomNuember = 3;

    int result = getFactorial(randomNuember);
    cout << result << endl;
    return 0; 
}

