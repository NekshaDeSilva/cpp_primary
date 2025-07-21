#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main(){
    string somevalue_to_be_clear = "Hello";
    cout << somevalue_to_be_clear << endl;

    somevalue_to_be_clear.clear();
    cout << somevalue_to_be_clear << endl; // Prints nothing because we have cleared the variable.


}
