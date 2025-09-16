#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <vector>

using namespace std;
int recurse( int number){
    if(number  ==0 ){
        return 1;

    }else{
        
        
       
        return number * recurse(number-1);

    }
}
int main(){
    long long int number = 10;
    cout << recurse(number);
}