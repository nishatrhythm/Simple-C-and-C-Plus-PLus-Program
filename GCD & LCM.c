#include<stdio.h>
int main()
{
    int i,s,l,gcd,lcm;
    scanf("%d%d",&s,&l);
    for(i=1;i<=s;i++)
    {
        if(s%i==0&&l%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}
