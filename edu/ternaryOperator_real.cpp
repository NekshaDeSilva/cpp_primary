#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;
int main(){
    srand(0);
    int firstval = rand()*100;
    int secval  = rand()*100;
    cout << "The first value is " << firstval << "\n" << "The Second value is " << secval << endl;
    string result = (firstval > secval) ? "The first value is biggest." : "The second value is the biggest.";
    cout << result << endl;
    cout << "This program was designed and developed by Neksha DeSilva." << endl;
}