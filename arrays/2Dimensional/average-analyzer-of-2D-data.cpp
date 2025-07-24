#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int R = 4;
int C = 5;
int main(){
    int arrayXD[R][C] ={
        {
            6,6,5,1,1
        },
        {
            6,99,5,21,1
        },
        {
            6,99,5,21,1
        },
        {
            6,6,5,1,1
        }
    };
    int rowavg[R];
    for(int i = 0; i < R; i++){
        int tempAVg=0;
        for (int x = 0;x < C; x++  ){
            cout << arrayXD[i][x] << " " ;
            tempAVg += arrayXD[i][x];
        }
        rowavg[i] = tempAVg/C;
        cout << endl;
    }
    cout << endl;
    cout << "Row averages: ";
    int high = 0;
    int samehighs = 0;
    for (int i = 0; i < R; i++) {
        cout << rowavg[i] << " ";
        if(rowavg[i]>= high){
            high = rowavg[i];
            
            }
        }
        for (int i =0; i < C; i++){
                if(rowavg[i] == high){
                    samehighs++;
                    
                }
    }
    


    cout <<  "Highest Average: " << high <<  "%" << endl;
    if(samehighs > 1 ){
        cout << "Same high avg count " << samehighs << endl;
    }
    cout << endl;
}