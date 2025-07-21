#include <iostream>
#include <string>
using namespace std;

// Recursive function to reverse a string
string reverseString(const string& input) {
    // Base case: if the string is empty, return empty string
    if (input.empty()) {
        return "";
    } else {
        // Take the last character and add the reverse of the rest
        return input.back() + reverseString(input.substr(0, input.size() - 1));
    }
}

int main() {
    string name;
    cout << "Enter your username please." << endl;
    getline(cin, name);
    // Call the recursive function to reverse the string
    string reversed = reverseString(name);
    cout << "You entered the name " << name << endl;
    cout << "Reversed: " << reversed << endl;
    return 0;
}