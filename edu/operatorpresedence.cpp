#include <iostream>
#include <string>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;

// Simulate evaluating the expression (hardcoded for now)
int runtheSequence(const string& exp) {
    cout << "Evaluating: " << exp << endl;
    // For demonstration, manually compute the result of 8*(8/4)/2+4
    int result = 8 * (8 / 4) / 2 + 4; // = 8 * 2 / 2 + 4 = 8 + 4 = 12
    cout << "Result: " << result << endl;
    return result;
}

int main() {
    string expe = "8*(8/4)/2+4";
    cout << "Welcome to Operator Precedence in C++!\n";
    cout << "Let's explore how operators are evaluated in expressions.\n";
    cout << "What's the answer of this: " << expe << "?" << endl;
    cout << "You will receive 10 seconds..." << endl;

    for (int i = 10; i > 0; i--) {
        cout << i << " second(s) left" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    runtheSequence(expe);
    cout << "Would you like to take a test of Operator Presedence in C++ for XOR, OR, NOT and other operators too?" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    

    return 0;
}