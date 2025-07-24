#include <iostream>
#include <iomanip>
using namespace std;
int n = 10; //You can edit the array length


int main(){
    int inputarray[n] = {1,0,0,1,1,0,1,1,1,1};
    int thelastpoint = 0;
    int zeroones =0;
    int oneones = 0;

    for(int i = 0; i < n+1; i++){
        if(i ==n ){
            break;
            
        }else{
            if(inputarray[i] == 0){
            zeroones++;
            cout << "added one to zeros" << endl;
        }else if(inputarray[i] == 1){
            oneones++;
            cout << "added one to ones" << endl;
        }
        if(oneones == zeroones){
            thelastpoint =oneones+zeroones;
        }

        }

        
    }
    
    cout << thelastpoint << endl;

    return 0;
    
    
}