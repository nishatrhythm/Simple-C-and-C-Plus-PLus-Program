#include<stdio.h>
long int factorial(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}

long int factorial(int n)
{
    long int fact=1;
    if (n>=1)
        fact=n*factorial(n-1);
    else
        return fact;
}
