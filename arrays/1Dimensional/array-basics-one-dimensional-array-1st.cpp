#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// here we talk all about one dimensional (1D) arrays and not about any other.
int main(){
    int array[5] = {7,8,9,35,363};
    cout << array[3] << endl; // Basic array access.

}

int main(){
    //Let's learn how to declare an array and print its content by a for loop.
    //Here, we're talking about a linear, 1Dimensional array.

    int student_details[10] = {
        'A','B', 'C', 'D', 'C', 'R'
    };
    for(int each =0; each < 11;  each ++){
        cout << student_details[each] << "\n\n" << endl;
    }
}


void callfunction(int arrayRetrieved[]){
    arrayRetrieved = {
        43,12312,121212,232
    };
}
int main(){
    //Now we're takling about how to assignn values into arrays without doing it at the initial declaring.
    
    int arry[4]; // Decalred an array without initialization.
    callfunction(arry);
    cout << arry << endl; //Since the arrays can only be passed by reference, the updated arry value will be displayed.

    //🔴🔴POINT:: In array traversal to another function, the array will be transferred using the method "Pass by reference.", whgich means, any of edits which are being done to the passed value, is also visible in the original array.

}



///////////////////////////////////////
