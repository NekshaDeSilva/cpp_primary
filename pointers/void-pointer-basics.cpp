#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
using namespace std;

int stringTest();
int boolTest();
int charTest();
int floatTest();
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
  main();
    return 0 ;
} 