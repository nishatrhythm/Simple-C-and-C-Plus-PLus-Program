#include <stdio.h>

int main()

{
    float num1, num2, sum, sub, mul, div;

    printf("Hello! Welcome to here.\nThis program is written in C and if you input two numbers then it will show you the Summation, Subtraction, Multiplication & Division of that numbers.\n\n");

    printf("So please enter the first number: ");

    scanf("%f", &num1);

    printf("\n\nPlease enter the second number: ");

    scanf("%f", &num2);

    sum=num1+num2;

    sub=num1-num2;

    mul=num1*num2;

    div=num1/num2;

    printf("\n\nSummation: %.2f + %.2f = %.2f\n\n", num1, num2, sum);

    printf("Subtraction: %.2f – %.2f = %.2f\n\n", num1, num2, sub);

    printf("Multiplication: %.2f × %.2f = %.2f\n\n", num1, num2, mul);

    printf("Division: %.2f ÷ %.2f = %.2f\n\n", num1, num2, div);

    printf("\n\nThanks for using this program.");

    return 0;

}
