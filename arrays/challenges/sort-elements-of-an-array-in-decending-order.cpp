#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

using namespace std;


// Used VOID because changes to the array will be automatically updated in the original array due to pass by reference.

void sortarray(thearray, size);
int main(){
 int thearray[] = {263, 154, 345, 443, 532};
 int size = sizeof(thearray) / sizeof(thearray[0]);
 
 for (int i = 0; i < size; i++) {
     cout << thearray[i] << " ";
void sortarray(int arrayrec[], int value) {
    for (int i = 0; i < value - 1; i++) {
        for (int j = 0; j < value - i - 1; j++) {
            if (arrayrec[j] < arrayrec[j + 1]) {
                int temp = arrayrec[j];
                arrayrec[j] = arrayrec[j + 1];
                arrayrec[j + 1] = temp;
            }
        }
    }
}       }
        
    }

