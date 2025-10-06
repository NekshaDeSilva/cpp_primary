
/*Task
Write a program that takes three user inputs: a, b, and r, representing the side length of a square, the side length of a cube, and the radius of a circle, respectively.
Create three overloaded functions to calculate the surface area of the square, the surface area of the cube, and the area of the circle.
Use these functions to print the area of the square, the surface area of the cube, and the area of the circle on three separate lines. */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int sqrlength(int side ){
    int area = side^2;
    return area;
    
}
int sqrlength(int side){
    int s_area = 6* side^2;
    return s_area;
    
}
int sqrlength(int rad){
    int rad_ =   2* (3.14) * rad;
    return rad_;

}
int main(){
int a,b,r;
cin >> a >> b >> c;
for (int i = 0; i < 3;  i++){
    cout << 
}
return 0;

}