#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
int main(){
    string name;
    cout << "Hello, what's your username?" << endl; 
    getline(cin, name);

    //USAGE OF THE STRING EMPTYING


    cout << "Okay your name is entering to the system " << name <<  endl;
cout << "\n\n" << endl;
cout << "Do you wanna continue? (press any key)" << endl;

    name.empty(); //THIS IS THE EMPTY FUNCTION FOR STRINGS.

    if(name.empty() == false){
        cout << "sorry, there was a system error while cleaning you name from our systems." << endl;
        return;
    }

}