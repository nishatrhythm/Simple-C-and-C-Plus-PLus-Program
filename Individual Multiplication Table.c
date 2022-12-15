#include<stdio.h>
int main()
{
    int i, j;
    printf("Input Multiplication Table Number: ");
    scanf("%d", &j);

    for(i=1; i<=10; i++)
    {
        printf("\n\t%d * %d = %d\n", j, i, i*j);
    }
}
