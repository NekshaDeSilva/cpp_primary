#include <iostream>
#include <iomanip>
using namespace std;

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
    
}