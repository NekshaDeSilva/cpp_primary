#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

using namespace std;
int rect(int* ptr, int length){
    int w,h; 
    w = ptr[0];

    h  = ptr[1];
    return w*h;
    
}
int main(){
int rectarray [2] ={123,23};
int* prectarray = rectarray;

int area = rect(prectarray, 2);
cout << area;



}