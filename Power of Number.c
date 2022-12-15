#include<stdio.h>
#include<math.h>
int main()
{
    int n, j, i;
    printf("Enter positive integer number : ");
    scanf("%d",&n);
    for(i=0, j=1; i<=n; i++)
    {
        printf("\n2^%d = %d\n", i, j=pow(2,i));
    }
    return 0;
}
