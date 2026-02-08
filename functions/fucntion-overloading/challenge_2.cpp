#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int calctherating_people(int worogbutmade, int made){
    int result  = worogbutmade + made;

    return result;
}
int main(){
        int N,A,B;
        cin >> N >> A >> B;
        
    cout << calctherating_people(B, N-(A+B)) <<  " "  << N-(A+B)<< endl;
    
}