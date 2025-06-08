#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
int main(){
    //Here is a complete guidemap to various usages of the `continue` statement in CPlusPlus
    for (int i =1; i < 10; i++){
        
        if (i ==5 ){
            continue;

        }
        cout << "Printed" << "\t" << i << endl;
    }
    return 0;
}