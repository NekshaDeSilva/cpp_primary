#include <iostream>
#include <iomanip>
using namespace std;
void functionref(int &refavlue);
int main(){
    

    int dynamic_value = 4;  //Watch this 
    functionref(dynamic_value); //Then the original value will be changed

    cout << "You can now see the value has changed from 4 to " << dynamic_value << endl;

}
void functionref(int &refvalue){
    cout << "Received the value of the original value as " << refvalue << "Then we're going to change it by multiplying with 10" << endl;
    refvalue *= 10;
}
