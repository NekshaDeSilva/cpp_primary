#include <iostream> // Added missing include for cout, endl
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// Correct: Function returns string, not void, so we need to use string(){},, not void(){} or int(){}
string theResponse(int firsttime) {
    if (firsttime == 1) {
        return "You: Yes, I need one";
    } else {
        return "You: Yes, I need one more";
    }
}

int main(){
    int firsttimed =1;

    // This is the introduction to the break statement in C++ language.
    int applecount = 5;
    
    for (;;) {
        cout << "Shopkeeper: Hey do you wanna buy apples?" << endl;
        firsttimed =0;
        // Correct: theResponse returns a string, so we can print it directly
        cout << theResponse(firsttimed) << endl;
        applecount--;
        cout << "Thanks for buying. we have " << applecount << " apples left." << endl;
        // Correct: Use '==' for comparison, not '='
        if (applecount == 0) {
            break; // Correct: break exits the loop when apples are finished
        }
        this_thread::sleep_for(chrono::seconds(2));
    }
    cout << "SORRY, all apples are over. There are no apples left." << endl;
}