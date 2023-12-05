#include<stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("Enter a positive integer to calculate factorial: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n", n, factorial(n));
    printf("\n______________________________________________________\n");
    printf("Smaran Rawal\n");
    printf("______________________________________________________\n");
    return 0;
}
int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

