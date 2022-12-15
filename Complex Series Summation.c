#include <stdio.h>
int main()
{
    // 1 + 1 by 3 + 1 by 5 + 1 by 7 + ...

    double sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i=i+2)
    {
        sum = sum + (1 / (float)i);
    }

    printf("Sum is: %.2lf", sum);
}
