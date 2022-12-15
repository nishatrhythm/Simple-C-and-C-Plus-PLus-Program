#include<stdio.h>
int main()
{
    int a;
    printf("Please choose a colour from below list.\n");
    printf("\n1. Violet\n2. Indigo\n3. Blue\n4. Green\n5. Yellow\n6. Orange\n7. Red\n\n");
    printf("Chosen Number: ");
    scanf("%d", &a);
    if (a==1)
        printf("\nYou chosen Violet.\n\n");
    else if (a==2)
        printf("\nYou chosen Indigo.\n\n");
    else if (a==3)
        printf("\nYou chosen Blue.\n\n");
    else if (a==4)
        printf("\nYou chosen Green.\n\n");
    else if (a==5)
        printf("\nYou chosen Yellow.\n\n");
    else if (a==6)
        printf("\nYou chosen Orange.\n\n");
    else if (a==7)
        printf("\nYou chosen Red.\n\n");
    else
        printf("\nSorry! Wrong input.\n\n");
    return 0;
}
