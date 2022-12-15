#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age>55)
        printf("\nThe man is old.\n\n\n");

    else
        printf("\nThe man is young.\n\n\n");

    return 0;
}
