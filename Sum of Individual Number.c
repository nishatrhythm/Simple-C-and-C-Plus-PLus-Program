/*#include<stdio.h>
int main()
{
    int i, n, a[10], b[10];
    scanf("%d", &n);

    int marks[n], num=1;

    for(i=0; i<n; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
        num=num;
    }

    for(i=0; i<n; i++)
    {
        printf("Case %d: %d\n", num+i, a[i]+b[i]);
    }

    return 0;
}


#include<stdio.h>
int main()
{
    int i, n, a[10], b[10];
    scanf("%d", &n);

    int marks[n], num=1;

    for(i=0; i<n; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
        num=num;
    }

    for(i=0; i<n; i++)
    {
        printf("Case %d: %d\n", num+i, a[i]+b[i]);
    }

    return 0;
}*/



#include<stdio.h>
int main()
{
    int i, n, a, b;
    scanf("%d", &n);

    int marks[n];

    for(i=1; i<=n; i++)
    {
        scanf("%d%d", &a, &b);
        printf("Case %d: %d\n", i, a+b);
    }

    return 0;
}


