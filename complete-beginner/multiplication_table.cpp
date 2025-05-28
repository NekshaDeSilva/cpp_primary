#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

// Function to print the multiplication table
void printMultiplicationTable(int number) {
    for (int i = 1; i <= 15; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

// Function to ask user if they want to store a number
void storeNumber() {
    string permission;
    cout << "Do you want to store a number in the notebook? (yes/okay/ok/no): ";
    getline(cin, permission);

    if (permission == "yes" || permission == "okay" || permission == "ok") {
        int multiplyClass;
        cout << "Enter the number you want to store in the notebook: ";
        cin >> multiplyClass;
        cout << "The number is: " << multiplyClass << endl;
        cout << "The number has been stored in the notebook." << endl;
        cin.ignore(); // Clear newline left in input buffer
    } else if (permission == "no") {
        cout << "The number has not been stored in the notebook." << endl;
    } else {
        cout << "Invalid input. No action taken." << endl;
    }
}

// Main process function
void oprocess(int number) {
    printMultiplicationTable(number);
    storeNumber();
}
int main() {
    int number;
    cout << "Welcome to Neksha's multiplication machine" << endl;
    cout << "Enter a number you want to get the whole multiplication table of: ";
    cin >> number;
    cin.ignore(); 
    cout << "Generating the multiplication table for your homework..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    oprocess(number);
    return 0;
}