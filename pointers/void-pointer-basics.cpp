#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
using namespace std;

int stringTest();
int boolTest();
int charTest();
int floatTest();
void testTheSizeOfTheAddress();

int main(){
    
    //WHAT IS THE VOID POINTER AND SUCH STUFF.
    //used for integer data type.
    int whatever_the_data_type_is = 3392;
    void* voidptr = &whatever_the_data_type_is;

    cout << "The void pointer's address can be directly printed as "<< voidptr<<endl;

    cout << "\n" << endl;
    cout << "But in order to get the value which is being pointed by the void pointer, we need to use the term *(static_cast<DATA_TYPE_OF_THE_VALUE*>(VOID_POINTER_NAME)) " << *(static_cast<int*>(voidptr)) << endl;
    stringTest();
    return 0;
} 


int stringTest(){
    //USED FOR STRING DATA TYPE.
    string whatever_the_data_type_is = "printed string";
    void* voidptr = &whatever_the_data_type_is;

    cout << "The void pointer's address can be directly printed as "<< voidptr<<endl;

    cout << "\n" << endl;
    cout << "But in order to get the value which is being pointed by the void pointer, we need to use the term *(static_cast<DATA_TYPE_OF_THE_VALUE*>(VOID_POINTER_NAME)) " << *(static_cast<string*>(voidptr)) << endl; //CHANGE
    charTest();
    return 0;
} 

int charTest(){
    //USED FOR STRING DATA TYPE.
    char whatever_the_data_type_is = 'u';
    void* voidptr = &whatever_the_data_type_is;

    cout << "The void pointer's address can be directly printed as "<< voidptr<<endl;

    cout << "\n" << endl;
    
    cout << "But in order to get the value which is being pointed by the void pointer, we need to use the term *(static_cast<DATA_TYPE_OF_THE_VALUE*>(VOID_POINTER_NAME)) " << *(static_cast<char*>(voidptr)) << endl; // CHANGE
    boolTest();
    return 0 ;
} 


int boolTest(){
    //USED FOR STRING DATA TYPE.
    bool whatever_the_data_type_is = true;
    void* voidptr = &whatever_the_data_type_is;

    cout << "The void pointer's address can be directly printed as "<< voidptr<<endl;

    cout << "\n" << endl;
    cout << "But in order to get the value which is being pointed by the void pointer, we need to use the term *(static_cast<DATA_TYPE_OF_THE_VALUE*>(VOID_POINTER_NAME)) " << *(static_cast<bool*>(voidptr)) << endl; // CHANGE
    floatTest();
    return 0 ;
} 



int floatTest(){
    //USED FOR STRING DATA TYPE.
    float whatever_the_data_type_is = 2.45433;
    void* voidptr = &whatever_the_data_type_is;

    cout << "The void pointer's address can be directly printed as "<< voidptr<<endl;

    cout << "\n" << endl;
    cout << "But in order to get the value which is being pointed by the void pointer, we need to use the term *(static_cast<DATA_TYPE_OF_THE_VALUE*>(VOID_POINTER_NAME)) " << *(static_cast<float*>(voidptr)) << endl; // CHANGE




    //The size of the pointer addresses are same and it does not depend on the data type we're gonna choose. 
    // The size of the pointer addresses might change due to the machine specific feature such as it always return 4 for the size of the address for 32 BIT operating systems while it always print 8 for 64 bit operating systems. 
    //To TEST this, i can run a void to see wheather what are the lengths of addresses of the pointers and how they do not change upon the type of the variable.

    testTheSizeOfTheAddress();
        return 0 ;
} 
void testTheSizeOfTheAddress(){
    int number =  87383;
    string text = "STRING";
    char character = 'd';
    bool dec = false;
    double decimal = 3.14159;
    long long largeNumber = 9223372036854775807;
    long double preciseDecimal = 2.718281828459045;

    void* voidptr;

    // Testing int
    voidptr = &number;
    cout << "Address of int: " << voidptr << ", Value: " << *(static_cast<int*>(voidptr)) << endl;

    // Testing string
    voidptr = &text;
    cout << "Address of string: " << voidptr << ", Value: " << *(static_cast<string*>(voidptr)) << endl;

    // Testing char
    voidptr = &character;
    cout << "Address of char: " << voidptr << ", Value: " << *(static_cast<char*>(voidptr)) << endl;

    // Testing bool
    voidptr = &dec;
    cout << "Address of bool: " << voidptr << ", Value: " << *(static_cast<bool*>(voidptr)) << endl;

    // Testing double
    voidptr = &decimal;
    cout << "Address of double: " << voidptr << ", Value: " << *(static_cast<double*>(voidptr)) << endl;

    // Testing long long
    voidptr = &largeNumber;
    cout << "Address of long long: " << voidptr << ", Value: " << *(static_cast<long long*>(voidptr)) << endl;

    // Testing long double
    voidptr = &preciseDecimal;
    cout << "Address of long double: " << voidptr << ", Value: " << *(static_cast<long double*>(voidptr)) << endl;

    //THEN WE CAN TEST ALL THE SIZES OF THE ADDRESSES.

    cout << sizeof(&text) << " " << sizeof(&number) << " " << sizeof(&dec) << " "  << sizeof(&character) << " " << sizeof(&preciseDecimal) << " " << sizeof(&decimal)  << endl; // It prints 8 8 8 8 8 8
}