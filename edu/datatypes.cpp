#include <iostream>
#include <iomanip>
using namespace std;
int readDataType(){

    // Complete the code.
int fnumber;
long long int  secnumber;
char tnumber;
double fournumber;
double fivenmber;


cin >>  fnumber;
cin >> secnumber;
cin >> tnumber;
cin >> fournumber;
cin >> fivenmber;
cout << fixed << setprecision(3);
cout << fnumber << " " << secnumber << " " << tnumber << " " << fournumber << " " << fivenmber << endl;

return 0;

}
int main(){
    cout << "Hey What you're doing right now!" << endl;
    int datavalue = 2;
    //it ommit the full decimal lines and shows only the integer part
    cout << "The value of datavalue is: " << datavalue << endl;
   unsigned long long   int datavalue2 = -98483976575678545;
    cout << datavalue2 << endl;
    unsigned int value4_hey = 58958595;
    cout << value4_hey << endl;
    string thevalue;
    int ASCII;
    cout << "Enter the ASCII value to be converted: ";
    getline(cin,thevalue);
    ASCII = (int)thevalue[0];
    cout << "The ASCII value of " << thevalue << " is: " << ASCII << endl;

    cout << "Let's test out the implicit type casting in c++ towards char>>" << endl;
    char value1 = 'A';
    int value2 = value1;
    cout << "The converted value is "<< value2 << endl;

 cout << "\n\n\n Now we could test the scientifc data storing in variables\n\n\n" << endl;
    long int valueBig = 8e6;
    cout << "Big Value is " << valueBig << "\n\n" << endl;
    //you can only use double for big numbers and to get the scientificat values easdily, you might need to get int data type.
    //There's another things thast use \n \t \"\' as soon as if they are requried to use 
    
    string theDecision;
    cout << "Now we can dive into what is the scenario called Declaration Conflict" <<"\n\n" << endl;
    cout << "Begin(y/n)" << endl;
    string value12;

    getline(cin, theDecision);
    if(theDecision == "y"){
        cout << "We just made a variable [value12], can you please give a name for it? " << "\n\n" << endl;
        getline(cin, value12); // Get the name from user
        cout << "You named your variable: " << value12 << endl;
        cout << "Now, let's try to create another variable with the same name but a different type." << endl;

        cout << "\n// Simulated code:\n";
        cout << "string " << value12 << " = \"some value\";\n";
        cout << "long " << value12 << " = 123456;\n";
        cout << "// This will cause a declaration conflict error!\n";
        cout << "// error: redefinition of '" << value12 << "' with a different type\n" << endl;

        cout << "As you can see, C++ does not allow two variables with the same name in the same scope, even if their types are different." << endl;
        readDataType();
        
    }else{
        cout << "You chose not to proceed with Declaration Conflict demo." << endl;
        cout << "hey it's your choice, but you missed a chance to see how C++ handles variable naming conflicts." << endl;
    }
    //hey
    

}
//for consistency, we need to add more operation conflicts
