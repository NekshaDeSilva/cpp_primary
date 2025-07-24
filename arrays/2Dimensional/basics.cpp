#include <iostream>
#include <iomanip>
using namespace std;

//This tutorial is for practising 2 dimensional arrays in cpp.
int main(){
    //Create a two dimensional array
    int array[4][6] ={ 
        {234,223,233,234,0,0},

        {6,4,22,6556,47873,99},

        {234,223,233,234,0,0},

        {6,4,22,6556,47873,99}
    };
    //This is how to initialize a two dimensional array.
    //And as said, a one row can be added per time. 

    ////////////////////////////
    //And also, we can manually add indexes for our 2D array without hardcoding them.
    array[2][1]  = 50; //Here's the way of editing a 2d array.
    cout << array[2][1];
    return 0;
}