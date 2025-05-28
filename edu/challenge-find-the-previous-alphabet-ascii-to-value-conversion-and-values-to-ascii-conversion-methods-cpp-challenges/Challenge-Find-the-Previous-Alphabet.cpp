#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>

using namespace std;
int main(){
    char character = 'B'; //Add your Alpahbet here.
    char character_before = '0';
    int ASCII;
    int char_value_in_ascii = int(character); //Converting the Char value to ASCII using int(CHAR_HERE) method.

    char_value_in_ascii -= 1;
    char char_value_in_ascii_coverted_to_char = char(char_value_in_ascii); //Coverting the ASCII value back to the Char vallue by char(ASCII_HERE) method.

    character_before = char_value_in_ascii_coverted_to_char;

    cout << character_before << endl; //The previous alphabet

}

