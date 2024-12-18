/*Write a program using recursion to calculate nth element of Fibonacci series.*/
#include <stdio.h>
int fibonacci(int n);
int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    printf("Fibonacci Series:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
