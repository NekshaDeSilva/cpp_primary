#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
using namespace std;

//The fibonacci equation is F(n) = (n-1) + (n-2)
long long int fibonacci(long long int nth){
    if(nth ==0){
        return 0;
    }else if(nth == 1){
        return 1;
        
       }else{
       return fibonacci(nth-1) + fibonacci(nth-2);
    }
}
int main(){
    cout << "Which fibonacci number do you want to see?" << endl;
    
    string uservalue;
    int value;
    getline(cin, uservalue);
    if(uservalue.empty() == true){
        cout << "You cancelled the process." << endl;
        return 0;
    }else{
        value  = stoi(uservalue);     
        long long int result  = fibonacci(value);     
        cout << "Fibonacci number " << value << " is: " << result << endl;
    }
    
   

}