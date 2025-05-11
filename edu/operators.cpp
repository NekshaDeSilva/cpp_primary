#include <stdio.h>
#include <iostream>
using namespace std;
int assignment(){
          int operand1 = 50;
  float operand2 = 26;
  double operand3 = 78;
  bool operand4 = true;
  char operand5 = 'A';
  string operand6 = "Welcome";

  // Prints value of the operands
  cout << "operand1 = " << operand1 << endl;
  cout << "operand2 = " << operand2 << endl;
  cout << "operand3 = " << operand3 << endl;
  cout << "operand4 = " << operand4 << endl;
  cout << "operand5 = " << operand5 << endl;
  cout << "operand6 = " << operand6 << endl;
    }
    int main() {
  int operand1, operand2;
  operand1 = 10;
  operand2 = 5;

  cout << "Division = " << operand1 / operand2 << endl;
  cout << "Modulus = " << operand1 % operand2 << endl;
  //operand is the exact value when an opernad is divided by another operand and the remainder is modulus.
  cout << "operand test " << 1000 % 124 << endl;
    int ASCII;
    char a,b;
    a = 'n';
    b= 'C';
    ASCII = (int)a;
  

    cout << "The ASCII value of " << a << " is: " << ASCII << endl;
      ASCII = int(b);
    cout << "The ASCII value of " << b << " is: " << ASCII << endl;
    cout << "Using modulus to find the remainder:" << a%b << endl;


  
    assignment();
  return 0;
}
  