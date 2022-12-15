#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("How many subjects: ");
    scanf("%d", &n);

    int marks[n], i;
    for(i=1; i<=n; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        sum=sum+marks[i];

    }
    printf("\nSum of %d subjects is: %d\nAverage of %d subjects is: %.2f\n\n", n, sum, n, (float)sum/n);
    return 0;
}
