#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

using namespace std;
int power(int base, int exponent);

int main(){

    int base = 2;
    int exponent = 10;
    int value = power(base, exponent);
    cout << value << endl;
    return 0;

    
}

int power(int base, int exponent){

    if(exponent == 1){
        return base;
    }else{
        
        
        return base  * power(base, exponent-1);
        
       
    }
    
}