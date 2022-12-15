/*FILE Creating*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;

    FILE *fptr;

    fptr=fopen("G:\\program.txt", "w");

    if(fptr==NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    printf("Enter Number: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}


/*FILE Opening*/
/*#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;

    FILE *fptr;

    fptr=fopen("G:\\program.txt", "r+");

    if(fptr==NULL)
    {
        printf("Error in opening file!");
        exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Value of n is: %d", num);
    fclose(fptr);

    return 0;
}*/
