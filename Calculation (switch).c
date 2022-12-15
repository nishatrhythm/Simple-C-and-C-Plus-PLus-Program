#include<stdio.h>
int main()

{

    int val_1, val_2, c;
    float perform;

    printf("Please enter two integers: ");
    scanf("%d%d", &val_1, &val_2);

    printf("\nWhich case do you want to perform?\n");
    printf("1. Summation\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("\nCase: ");
    scanf("%d", &c);

    switch (c)
    {

    case 1:
        perform=val_1+val_2;
        printf("\nSum is: %d\n\n", perform);
        break;

    case 2:
        perform=val_1-val_2;
        printf("\nDifference is: %d\n\n", perform);
        break;

    case 3:
        perform=val_1*val_2;
        printf("\nMultiply is: %d\n\n", perform);
        break;

    case 4:
        perform=(float)val_1/val_2;
        printf("\nDividend is: %.3f\n\n", perform);
        break;

    default:
        printf("\nSorry! Your input was wrong.\n\n");

    }

    return 0;

}
