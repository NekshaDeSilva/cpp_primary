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
int correctIncorrectMeasure(const string& state){
    cout << "Evaluating: your answer.." << endl;
    if(state == "correct"){
        cout<< "Correct" << endl;


    }else{
        cout <<  "Incorrect, Try Again!" << endl;
    }
    return 0;
    
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
    expe = "8^3(2)+4-2*4";
    cout << "What is the Answer for this: " << expe << endl;
     for (int i = 10; i > 0; i--) {
        cout << i << " second(s) left" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    runtheSequence(expe);
    cout << "Ahh That was a bit hard; So now try this:" << endl;
    expe = "~4&2*2+10" ;

    cout << "What is the Answer for this: " << expe << endl;
     for (int i = 10; i > 0; i--) {
        cout << i << " second(s) left" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    runtheSequence(expe);
    cout << "Okay, Now the test mode!" << endl;
    cout << "\n\n" ; 
    int the_valueReturned = runtheSequence(expe);
    cout << "🔴 From now on, type your answer in the space given, while we are counting."<< endl;
    expe= "~1*100(~1)^6^5";
    cout << "What is the answer for this: " << expe << endl;
    int the_valueEntered;
    cin >> the_valueEntered;
    for (int i = 10; i > 0; i--) {
        cout << i << " second(s) left" << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
   

    
    if(the_valueEntered == the_valueReturned){
        correctIncorrectMeasure("correct");

    }else{
        correctIncorrectMeasure("incorrect");
    }



    return 0;
}