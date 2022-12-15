#include <stdio.h>

int main()

{

    float a, b, c, x;

    printf("Hello! Welcome to here.\nGiven, the equation is A = X(B–C).\nThis program will find the value of 'X' if you input the value of 'A', 'B' & 'C' respectively.\n\n");

    printf("So please enter the value of 'A', 'B' & 'C' separated with a space: ");

    scanf("%f%f%f", &a, &b, &c);

    x=a/(b-c);

    printf("\n\nThe value of 'X' is: %.2f", x);

    printf("\n\nThanks for using this program.");

    return 0;

}
