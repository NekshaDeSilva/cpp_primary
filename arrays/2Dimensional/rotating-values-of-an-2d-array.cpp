#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void left_rotate(int arr[], int size){
    int newarray[size];
    int curstate= 0;
    for(int i = size-1; i >= 0; i--){ 
        newarray[curstate] = arr[i];
        curstate++;

    }
    for(int i = 0; i < size; i++){
        arr[i] = newarray[i];
    }
}

int main(){
    int curstate_local = 0;
    int arr[100]; 
    cout << "Hello, what is the array that you wanna reverse?" << endl;
    for (;;)
    {
        string value;
        getline(cin, value);
        if(value.empty()){
            break;
        }else{
            arr[curstate_local] = stoi(value);
            curstate_local++;
        }
    }
    cout << "You entered the array: ";
    for(int i = 0; i < curstate_local; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\nRolling..." << endl;
    left_rotate(arr, curstate_local);
    cout << "Reversed array: ";
    for(int i = 0; i < curstate_local; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}