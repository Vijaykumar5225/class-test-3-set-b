#include <stdio.h>

// function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

// function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // calculate and print factorial
    printf("Factorial of %d is %d\n", num, factorial(num));

    // calculate and print GCD
    int x, y;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));

    return 0;
}
