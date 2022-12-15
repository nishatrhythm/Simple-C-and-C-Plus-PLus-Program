#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter First integer: ");
    scanf("%d", &a);

    printf("Enter Second integer: ");
    scanf("%d", &b);

    printf("Enter Third integer: ");
    scanf("%d", &c);

    if (a<b && a<c)
        printf("%d is the smallest of three integers.", a);

    else if (b<a && b<c)
        printf("%d is the smallest of three integers.", b);

    else
        printf("%d is the smallest of three integers.", c);

    return 0;
}
