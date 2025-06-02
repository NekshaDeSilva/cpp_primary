#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>

using namespace std;
int main(){
    
char character = 'z';
int ASCII;
int realvalue = int(character);

switch (realvalue) {
    case 65 ... 90:
    cout << "upper-case alphabet" << endl;
    break;
    case 97 ... 122:
    cout << "lower-case alphabet" << endl;
    break;
    default:
    cout << "not an alphabet" << endl;
    break;
}

    
}