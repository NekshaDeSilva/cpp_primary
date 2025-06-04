#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>


using namespace std;
int main(){
    //This is a demo of the infinite loop type 1 with the for loop; 
    //This is the easiest and the most efficient way of doing infinite loop;
    int somevalue =1;

    for (;;){
        somevalue++;
        cout << somevalue << endl;

    }
    //This adds until it reaches to infinite(not ending)
    
}