#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, x;
    float d, X, x1, x2;

    printf("Hi! Welcome here.");
    printf("\nThis program is to find out the root(s) from the general form of binomial equation, ax^2+bx+c=0.");

    printf("\n\nSo, please enter the value of a: ");
    scanf("%d", &a);

    printf("\n\nSecondly, enter the value of b: ");
    scanf("%d", &b);

    printf("\n\nFinally, enter the value of c: ");
    scanf("%d", &c);

    d=(b*b)-(4*a*c);

    x1=((-b)+sqrt(d))/(2*a);
    x2=((-b)-sqrt(d))/(2*a);

    X=(-b)/(2*a);

    if (d<0)
    {
        printf("\n\nThe both of roots of the binomial equation are imaginary.");
    }


    else if (d==0)
    {
        printf("\n\nThe both of roots of the binomial equation are real and equal.");
        printf("\nRoots are X1 = X2 = %.3f", X);
    }


    else
    {
        printf("\n\nThe roots of the binomial equation are real but different.");
        printf("\nRoots are X1 = %.3f and X2 = %.3f respectively.", x1, x2);
    }

    printf("\n\nThanks for using this program.\n\n\n");

    return 0;

}
