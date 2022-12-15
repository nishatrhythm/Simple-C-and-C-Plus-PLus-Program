#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float p;
    printf("Enter a value: ");
    scanf("%d", &n);
    p=sqrt(n);
    if(ceil(p)==floor(p))
    {
        printf("Absolute.");
    }
    else
    {
        printf("Not absolute.");
    }
    /*int p, n;
    float q;
    printf("Enter a value: ");
    scanf("%d", &n);
    p=sqrt(n);
    q=(float)sqrt(n);
    if((p-q)==0)
    {
        printf("Absolute.");
    }
    else
        {
            printf("Not absolute.");
        }*/
    return 0;
}
