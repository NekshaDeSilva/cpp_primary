
/*Task
Write a program that takes three user inputs: a, b, and r, representing the side length of a square, the side length of a cube, and the radius of a circle, respectively.
Create three overloaded functions to calculate the surface area of the square, the surface area of the cube, and the area of the circle.
Use these functions to print the area of the square, the surface area of the cube, and the area of the circle on three separate lines. */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double sqrlength(int side ){
    double area = side * side;
    return area;
    
}
double sqrlength(long int side){
    double s_area = 6 * side * side;
    return s_area;
    
}
double sqrlength(int rad){
    double area = 3.14 * rad * rad;
    return area;

}
int main(){
int a;
long int b;
double r;
cin >> a >> b >> r;
cout << sqrlength(a) << endl;
cout << sqrlength(b) << endl;
cout << sqrlength(r) << endl;
return 0;

}