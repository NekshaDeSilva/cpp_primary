#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
using namespace std;

void left_rotate(int array[], int size){
    int anotherarray[size] ={};
    int numeration =0 ;
    for (int i =8; i >-1; i--){
        numeration++;
        anotherarray[numeration] = array[i];

    }
    for (int i =0; i < 10; i++){
        array[i] = anotherarray[i];
    }
}
int main(){ 
    int existingarraypp[10] = {1,2,3,4,5,6,7,8,9,10};
    left_rotate(existingarraypp, 10);
    for (int i =0; i < 10; i++){
        cout << existingarraypp[i] << endl;
    }
} 