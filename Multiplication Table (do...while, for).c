/*#include<stdio.h>
#define colmax 10
#define rowmax 10
int main()
{
    int row, col, a;
    row=1;
    printf("                                 MULTIPLICATION TABLE\n");
    printf("      --------------------------------------------------------------------------\n\n");
    do
    {
        col=1;
        do
        {
            a=row*col;
            printf("%8d", a);
            col++;
        }
        while(col<=colmax);
        printf("\n\n");
        row++;
    }
    while(row<=rowmax);
    printf("      --------------------------------------------------------------------------\n");
    return 0;
}*/



#include<stdio.h>
int main()
{
    int a[10][10], i, j;
    printf("                                   MULTIPLICATION TABLE\n");
    printf("       ----------------------------------------------------------------------------\n\n");
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("\t%d", i*j);
        }
        printf("\n\n");
    }
    printf("       ----------------------------------------------------------------------------\n");
    return 0;
}
