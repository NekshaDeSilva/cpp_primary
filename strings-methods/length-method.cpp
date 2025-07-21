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


    if(name.length() > 6){
        cout << "Your name " << name << " is too long. please shorten it and try again." << endl;


        return 0;
    }else{
        cout << "User " << name << " registered successfully. please wait for a moment to see your account" << endl;

        cout << "\n\n" << endl;
        cout << "Please enter your password." << endl;
        string password;

        getline(cin, password);
        cout << "Password entered successfully." << endl;
        cout << "Your password length is " << password.length() << endl;
        
        
    }


    return 0;


}