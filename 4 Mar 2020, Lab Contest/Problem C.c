#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, i, j, k, n, count;
    scanf("%d", &n);
    for(k=1; k<=n; k++)
    {
        scanf("%d%d", &a, &b);
        for(i=a; i<=b; i++)
        {
            count=1;
            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    count=0;
                    break;
                }
            }
            if(count)
            {
                if(i!=1)
                {
                    printf("%d\n", i);
                }
            }
        }
    }
    return 0;
}
