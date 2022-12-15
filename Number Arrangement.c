#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        if(i%5==0)
            printf("\n\t%d\t", i);
        printf(");
    }
    return 0;
}
