#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    int a=n,b=m;
    int re=1;

    if(n>m)a=m,b=n;

    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
            re=i;
    }
    printf("%d\n",re);

    return 0;
}
