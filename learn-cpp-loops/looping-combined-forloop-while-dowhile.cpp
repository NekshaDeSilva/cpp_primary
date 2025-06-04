#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <deque>
#include <chrono>

using namespace std;

int main(){
    int money =10;

    do{
        cout << "Hey can i lend you a book" << endl;
        cout << "Sure, you can! here take it" << endl;
        
        if(money > 2){ //A new point <! and >! and !==
        cout << "Oh yes! I made my first business today!!" << endl;
        money -= 3;
         }else{
        cout << "Oh, I have given that book for free! oh my god my sleepy mind!" << endl;
            return 0;
        }
    }while(money > 2); //In here,  the shopman gives the book without prior assesment of the money the costomer had, so, this can be called as an pre execution based loop and the interesting thing is when the shopman checks for money, then he catches that he had given the book for free!
    
    
    
}