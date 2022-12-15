#include<stdio.h>
int main()
{
    int n, i, a, b, c;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if((b<c&&b>a)||(b<a&&b>c))
            printf("Case %d: %d\n", i, b);
        else if((a<b&&a>c)||(a<c&&a>b))
            printf("Case %d: %d\n", i, a);
        else
            printf("Case %d: %d\n", i, c);
    }
    return 0;
}
