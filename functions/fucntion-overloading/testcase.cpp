#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//An  example for function overloading
int math(int a, int b){
    int result = a+b *  (a-b);
    return result;
    
}
int math(string somevalue, int connector){
  int  all_value = stoi(somevalue) +  connector  ;
  return  all_value;
  
  
}
    int  main(){
        int a,b;
        cin >> a >>  b;
        cout  <<  math(a,b);
}