#include <iostream>
using namespace std;

int main() {
    int total_seconds = 56890;
    int hours, minutes, seconds;

    hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600; //MODULUS should be gained so, then we use the function % 
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    cout << hours << endl;
    cout << minutes << endl;
    cout << seconds << endl;

    return 0;
}