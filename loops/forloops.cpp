#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string string1;
    int holderUntilTrue =1;

     cout << "Hello Worlds, enter a word to continue." << endl;
        getline(cin, string1);
    for(int i = 0; i < 19; i++){
       
        cout << "Entered: " << string1 << " for the " << i << "th time" << endl;
    }
    while(holderUntilTrue <= 1000){
        cout << "hey" << endl;
        holderUntilTrue++;
    }
    for(int i = 0; i< 11000 ; i = i+100){
        do{
            cout << "hey This is a print" << endl;
            
        }while(holderUntilTrue >= 1000);{
            cout << "HJey noiw changed to this" << holderUntilTrue << endl;
            holderUntilTrue++;
        }
    }
}