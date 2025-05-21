#include <stdio.h>

// Sample C code for cpp_practice repository
// This program demonstrates basic input/output and a simple loop

int main() {
    int n;
    printf("Welcome to cpp_practice sample C program!\n");
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);

    printf("Multiplication table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("Thank you for using cpp_practice!\n");
    return 0;
}