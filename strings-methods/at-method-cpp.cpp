#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
void anotherusage(){
    string somevalue = "hello_world";
    cout << somevalue.at(0) ;
}
int main(){
    string word = "OpenRockets";
    cout << "The word is: " << word << endl;
    cout << "Character at index 0: " << word.at(0) << endl;
    cout << "Character at index 4: " << word.at(4) << endl;
    cout << "Last character: " << word.at(word.size() - 1) << endl;
    cout << "All characters using at(): ";
    for (size_t i = 0; i < word.size(); ++i) {
        cout << word.at(i) << ' '; //Printing specific chars using .at() command.
    }
    cout << endl;
    anotherusage();
    return 0;
}