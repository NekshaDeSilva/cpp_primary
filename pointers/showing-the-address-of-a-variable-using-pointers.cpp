#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

using namespace std;

int main(){
    
    int number  = 89898;
    int* location = &number;

    //now let's print the variable value and where that varible stored in.
    cout << number << endl;
    cout << location << endl;

    //This address location can be also obtained via an instant method:
    cout << &number << endl;

    //To get the value stored in the pointer location via POINTER variable,
    cout << *location << endl;

}


//We can modify the pointer address but the modification of the variable should be the same as the prvious one, that means it should be the same type as before.

int main(){
    //the first variable and the pointer addresssing its memory.
    int something = 990;
    int *ptr = &something; //Adding the * mark when first declaring the pointer. 

    //changing the address of the opinter to ANOTHER VARIABLE
    int another_thing = 7754;
    ptr = &another_thing // We never add the * mark again when we just need to to change te address of the pointer.

}

//THE WILD Pointer

// a wild pointer is a pointer where its value is irrelevent and random. When we create a pointer without any declarsion of a value, then, the pointer becomes a wild pointer where its value is nothing good.

int main(){
    int *wild;
    cout << wild;
 // Prints a invalid address where no value exists there.

}
//THE NULL POINTER.
int main(){
    int  *nullpointer = NULL;
    //tHE NULL POINTER IS USED TO CREATE A NULL address value when it's necesssory to create a pointer but not needed to pass a value into it.
    
}