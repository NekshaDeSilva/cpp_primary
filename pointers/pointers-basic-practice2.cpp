#include <iostream>
#include <iosmanip>
#include <string>
#include <thread>

using namespace std;
//IMPORTANT POINT: we cannot stoethe address of a variable in anpther variable in this manner. i T WILL LEAD TO an catastrophic error in the console. 
    /*
    int i = 5362;
    int address_of_i = &i; // This will throw an error because this is not the approach when it comes to aving the addresss of a variable. WE CAN USE POINTERS INSTEAD.


    */
int main(){
    int somevalue = 44233;

    int *pointer = &somevalue;
    /*In this casee, the somevalue is 442233 and the address that variable is located in can be identified via then pointer we have specially made. */

    //Initaliing pointers  
    int *pointer1, *pointer2, *pointer3, *pointer4; //When initializing pointers in the same line, you need to use the asterix before each of those pointers

}

int main(){
    // WHEN we hasve nothing to initialize to the pointer, we have to initalize that pointer as a nullptr; Otherwise it eill be initialized top 0;

    int *pointer = nullptr;
    cout << pointer; // 0
    int *pointer = nullptr;
}

//Dereferending a pointer.
int main(){
    int somevalue_stored = 453;
    int *somevalue_location = &somevalue_location; //In here, i have taken the address where the somevlaue is stored in. 
    
    // SO DEREFERENCING IS JUST A ANOTHER KIND OF A METHOD TO seek the value of the variable which te address is pointing to, and then by dereferencing, we can get the value not by directly decaring the variable idenatifier, but by using its' address.
    cout << somevalue_stored; //BASIC METHOD: Taking the valueof the variable by using its identtifier.

    cout << *somevalue_location; // DEREFERENCING.
    
    
}
