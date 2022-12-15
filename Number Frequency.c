/*#include<stdio.h>
int main()
{
    int n, i, j, l, r=0, k=0;
    printf("Enter the number of Array: ");
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ara[i]==ara[j])
                k++;
        }
        for(l=0; l<i; l++)
        {
            if(ara[i]==ara[l])
                r++;
        }
        if(r==0)
            printf("The number of %d in the Array is %d\n", ara[i], k);
        k=0;
        r=0;
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers: ");
    scanf("%d", &n);

    int a[n], i, count=0;
    printf("Enter %d numbers: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==5)
            count++;
    }
    printf("\nThe number 5 in the Array is %d.\n\n", count);
    return 0;
}
