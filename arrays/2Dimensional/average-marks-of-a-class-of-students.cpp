#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
double average(double marks[], int size){
    double allmarks = 0;
    for(int i = 0; i < size; i++){
            allmarks += marks[i];

    }
    double average = allmarks / size;
    return average;
}
int main(){

}