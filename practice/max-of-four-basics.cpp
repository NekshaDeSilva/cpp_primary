#include <iostream>
#include <iomanip>
#include <string>
int max_of_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int max_of_four(int a, int b, int c, int d) {
 
    int max1 = max_of_two(a, b);

  
    int max2 = max_of_two(c, d);

   
    return max_of_two(max1, max2);
}

int main(){
    cout << "the max of four integers 2,4,5,5 is, " << max_of_four(2,4,5,5) << endl;
}
// this is one of the most fascinating things i have ever seen in programming actually, perfectly solved the problem by diving it into teo parts. perfectly done!!!
// LET'S GO!