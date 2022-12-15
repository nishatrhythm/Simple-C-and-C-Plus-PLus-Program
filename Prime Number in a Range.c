#include <stdio.h>
int main()
{
    int i, n, j, count=0;
    printf("Enter last number of range: ");
    scanf("%d",&n);
    printf("Prime Number: ");

    for(i=2; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j==0)
                break;
        }

        if(i==j)
        {
            count++;
            printf("%d ", i);

        }
    }
    printf("\nTotal Prime Number Count: %d\n\n", count);

}


