#include<stdio.h>
int main()
{
    int a, b, c, r1, r2;
    scanf("%d%d%d", &a, &b, &c);
    r1=a-(b+c);
    r2=a-(b*c);
    if(r1<r2)
        printf("%d\n", r1);
    else
        printf("%d\n", r2);

}
