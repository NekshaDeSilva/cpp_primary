#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <cmath>
using namespace std;
int add_diagonal(int firstrow[3], int secrow[3], int thridrow[3], int rown, int  coln){
    int matrixA[rown][coln] = {
        firstrow,
        secrow,
        thridrow
    };

    int diagonalSUM = 0;
    int ncolPlaceholder =0;
    for(int i = 0; i < nrows;  i++){
       
               diagonalSUM += matrixA[i][ncolPlaceholder];
    
ncolPlaceholder++;

     
    }
    cout << diagonalSUM;
}
int main(){
    add_diagonal ({1, 2, 3}, {4, 5, 6}, {7, 8, 9}, 3, 3);

}

//I did not actually know how to convert a braced input like {1,2,4} and append it into a function parameter. And then I did lose from it