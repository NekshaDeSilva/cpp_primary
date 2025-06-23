//Okay, is it neccssory to declare a function for making it executed, so, then what is the need of declaring and what is the things to consider?

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //let's  try calling some fucntion here.
    turn_integer_to_a_magic(48, "nekshadesilva");
    //IMPORTANT >> When we run this code, it will boom up an error. Why?
    //C++ complis the code from top to bottom, so then, the called fucntions inside the main() function will not be recognized as a known fucntion by the system, hence, the code will stop compiling probably generate an error.

}

void turn_integer_to_a_magic( int ingredients, string maker){
    cout << "The number of ingredients used were " << ingredients << " and the food was prepared by " << maker << endl;
    return;
}


/*___________________________________________________________________________*/

//Instead, what we could have to do it, declaring the funtion that we wanna use inside another fucntion, earlier than the function which we gonna use to call that perticular fucntion. and start calling it inside the mian or whenever.

//So, it can be done via two methods.
// 1. Declaring the full fucntion before the main() fucntion and calling it from the main()
// 2. Declaring the function after the main function or wherever after the main() fucntion and declaring that particular function again before the main() function in an initial declaring form.

//HERE'S THE WORKING EXAMPLE OF CODE:
void thefunction_tobeexecuted(int somevalue_for_int, string somevaluezs_for_string);
//The initial declarsion of a function is below.^

//Then we can  call that particular fucntion inside the main() function but under one major condition.
//We must have to declare the full woking function with {inner content} after the main function or whereever after the initial declarsion.
int main(){
    thefunction_tobeexecuted(59, "neksha");
    //then i must declare the full working fucntion in the bottom as well.
}
//HERE'S HOW:
int thefunction_tobeexecuted(int somevalue_for_int, string somevalue_for_string){
    cout << "This is thye working code snippet of the function."
}
/*___________________________________________________________________________*/