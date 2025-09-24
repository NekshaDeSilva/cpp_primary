#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

bool canMultiply(int col1, int row2) {
    return col1 == row2;  // For matrix multiplication: columns of first = rows of second
}

void multiplication(int arr1[][2], int row1, int col1, int arr2[][2], int row2, int col2, int result[][2]) {
    
    if(canMultiply(col1, row2)) {
        // Proper matrix multiplication: result[i][j] = sum of arr1[i][k] * arr2[k][j]
        for(int i = 0; i < row1; i++) {
            for(int j = 0; j < col2; j++) {
                result[i][j] = 0;  // Initialize to 0
                for(int k = 0; k < col1; k++) {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        
        // Print result
        cout << "Result matrix:" << endl;
        for(int i = 0; i < row1; i++) {
            for(int j = 0; j < col2; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matrix multiplication not possible!" << endl;
        cout << "Columns of first matrix (" << col1 << ") must equal rows of second matrix (" << row2 << ")" << endl;
    }
}

int main() {
    // Declare matrices properly
    int matrix1[2][2] = {{1,2}, {5,7}};
    int matrix2[2][2] = {{10,20}, {-30,70}};
    int result[2][2];
    
    multiplication(matrix1, 2, 2, matrix2, 2, 2, result);
    
    return 0;
}
//Really confused here.