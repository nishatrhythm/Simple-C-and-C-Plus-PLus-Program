#include<stdio.h>
int main()
{
    int a[100][100], i, j, row, col;

    printf("Enter the Row of the Matrix: ");
    scanf("%d", &row);

    printf("Enter the Row of the Matrix: ");
    scanf("%d", &col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
