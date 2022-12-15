#include <stdio.h>

#include <math.h>

int main()

{

    float a, b, c, s, area;

    printf("Hello! Welcome to here.\nThis program is about to calculate the area of a triangle.\nIf you input the three arms' value of the tritangle then the program will show the total area.\n\n");

    printf("So please enter the first arm's value (in cm): ");

    scanf("%f", &a);

    printf("\n\nAgain enter the second arm's value (in cm): ");

    scanf("%f", &b);

    printf("\n\nFinally enter the third arm's value (in cm): ");

    scanf("%f", &c);

    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\n\nArea of the triangle is: %.2f sq. cm", area);

    printf("\n\nThanks for using this program.");

    return 0;

}
