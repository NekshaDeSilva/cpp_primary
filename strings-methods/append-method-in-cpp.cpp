#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
int main(){
    cout << "Hello, what's your name?" << endl;
    string name;
    getline(cin, name);
    cout << "Thanks for registering  " << name << "! We'll take your email.. \n\n" << endl;
    name.append("@microsft.com"); //FINBAL AFDTER APPENDING: name@microsoft.com
    cout << "your email was added as: " << name << endl;
}