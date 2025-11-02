#include <stdio.h>

// Function that calculates factorial iteratively using 3 parameters
int factorial(int n, int fact, int i) {
    fact = 1; // initialize factorial
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int a, i, fact;

    printf("Enter a number: ");
    scanf("%d", &a);

    fact = factorial(a, fact, i); // call the function

    printf("Factorial: %d\n", fact);

    return 0;
}
