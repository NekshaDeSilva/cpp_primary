#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
int main(){
int number;
srand(0);

for(;;){
    int i=0;
int count_of_int= 0;
    number = rand()*1;

     //Assuming the input number, You can change this any time to see the changes in output.
    cout << "Number :" << number << endl;

for (;;){
    if(number == 1){
        cout << "not prime" << endl;
        break;
    }
    i++;
    int resulton = number % i;
    
    if(resulton == 0){
        count_of_int += 1;
        if(count_of_int > 2){
            cout << "not prime" << endl;
            break;
        }
    }else{
        //donothing
    }
    if(i > 100){
        if(count_of_int < 3){
            cout << "prime" << endl;
            break;
        }
        break;
        
    }
}
this_thread::sleep_for(chrono::seconds(2));

}
}