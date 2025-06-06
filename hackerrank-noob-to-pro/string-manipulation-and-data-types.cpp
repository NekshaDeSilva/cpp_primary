#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int method(string type, string word) {
    int sizef;
    if(type == "length") {
        sizef = word.length();
    } else if (type == "size") {
        sizef = word.size();
    } else {
        cout << "Please enter a valid method" << endl;
        return 0;
    }
    cout << "The number of letters is: " << sizef << endl;
    return sizef;
}

int main() {
    string user_name;
    cout << "Things to learn: how to count the length of chars or letters in a string?" << endl;
    cout << "There are two methods of it." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Enter your name and we will count how many letters in them." << endl;
    getline(cin, user_name);
    cout << "Thanks, we are gonna try out the usage of size()" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    
    method("size", user_name);
    cout << "Re enter your age in words (e.g.- twenty five) and we will find out how many letters in there!" << endl;
    getline(cin, user_name);
    cout << "Thanks, we are gonna try out the usage of length():" << endl;
    method("length", user_name);
    this_thread::sleep_for(chrono::seconds(2));
}