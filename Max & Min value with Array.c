#include<stdio.h>
int main()
{
    int a[100], i, n, max, min;

    printf("Enter how many values you want to enter: ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }

    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }

    printf("The maximum value is: %d\nThe minimum value is: %d\n\n", max, min);
    return 0;
}
