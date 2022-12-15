#include<stdio.h>
#include<string.h>
int main()
{
    int i, l, n;
    char x[100];
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s", &x);
        l=strlen(x);
        if(l<=10)
            printf("%s\n", x);
        else
        {
            printf("%c%d%c\n", x[0], l-2, x[l-1]);
        }
    }
    return 0;
}
