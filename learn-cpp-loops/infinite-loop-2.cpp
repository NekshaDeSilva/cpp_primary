#include <iostream>
using namespace std;

int main() {
  int number = 1;
  while (number > 0){
    cout << number << endl;
  }
  return 0;
  //In this method, we set the value of number to 1, so since there are no impact to it's value in the code further, it will remain 1 as a constant forever. Similary, the while loop,which asks for is 1>0? is always true, the cout command does it job until it reaches the infinite (does not end at all.) 
}