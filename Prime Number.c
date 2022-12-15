#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if((n%i==0)&&(i==n))
        {
            printf("Prime.\n");
            break;
        }
        else
        {
            printf("Not prime.\n");
            break;
        }
    }
    //printf("The program worked %d times", s);
}
