#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
/*These things are called as Library functions.  In cpp, library functions are indexed in the header.*/

void somefunction();
void valuereturn_function();
int main();
/*These functions are called as user-defined functions.*/

/*___________________________________________________________________________*/


//In the int main() functionn (the main function),  adding a return 0; statement is not mandatory.
int main(){
    return 0;
    // or you can leave without it.
}

/*___________________________________________________________________________*/

// calling a fucntion 
//We shooudl call a declarewd fucntion to let it exectue. otherwise it wont execute as we think.
//Fun fact: look at this closely.
void somefunction(int age , string name){
    cout << "my age is " << age << " and my name is " << name << endl;

}
int main(){
    //to call the function, we use, FUNCTION_NAME(VALUES_FOR_PARAMETER1, VALUE_FOR_PARAMETER2, VALUE_FOR_PARAMETER3 , VALUE_FOR_PARAMETERn);
    somefunction(37, "neksha");
    //This is the way we use it!

}

/*___________________________________________________________________________*/


