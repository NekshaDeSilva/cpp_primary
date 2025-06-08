#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
int main(){
     int evennumber;

    //Here is a complete guidemap to various usages of the `continue` statement in CPlusPlus
    for (int i =1; i < 10; i++){
         evennumber = i%2;
        //it ommits the even numbers form the results.
        
       if (evennumber == 0){
        continue;
       }
        cout << "Printed odd number" << "\t" << i << endl;
    }
    return 0;
}