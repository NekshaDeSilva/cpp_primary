#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>
#include <deque>
using namespace std;
int main(){
    int number  = 555666595;
    //We have to check wheather this or any given number is becoming a palindrome.
    string number_to_string = std::to_string(number);
    int wordlength = number_to_string.length();
    bool is_palindrome = true;
    for(int i = 0; i < wordlength / 2; i++){
        if(number_to_string[i] != number_to_string[wordlength - 1 - i]){
            is_palindrome = false;
            break;
        }
    }
    if(is_palindrome){
        cout << "a palindrome" << endl;
    } else {
        cout << "not a palindrome" << endl;
    }

}