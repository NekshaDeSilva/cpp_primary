#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
int main(){
    cout << "Welcome to Nested loops. I will teach you through Nested loops as we see in this tutorial!" << endl;
    //You need to create a multiplication table of 6,7,8,9 numbers and from 1x to 10x per each. How can you do this? 

    //example code 

    for (int theMainNumber =6; theMainNumber < 10; theMainNumber++){
      cout << "The Table of " << theMainNumber << " is" << endl;
      for (int innernumber = 1learn-cpp-loops\nested-loops-cpp.cpp; innernumber< 11; innernumber++){
        cout << theMainNumber << " x " << innernumber << " = " << (theMainNumber * innernumber) << endl;

      }
      cout << "\n ------------------------------------------------------------ \n" << endl;
      this_thread::sleep_for(chrono::seconds(2));

    }
}