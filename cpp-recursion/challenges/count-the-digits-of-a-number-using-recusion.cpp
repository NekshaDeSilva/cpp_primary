#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

using namespace std;
int numofDigits = 1;
int count_digits(int number){
    

    if((0 < number && number < 10) || (0 > number && number > -10)){
        return numofDigits;
    }else{
       numofDigits++;
        number /= 10;
        
        return count_digits(number);

    }
}
int main(){
   int result =  count_digits(-1);
   cout << result << endl;

}