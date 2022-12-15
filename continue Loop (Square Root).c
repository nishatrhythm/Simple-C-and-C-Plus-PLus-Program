#include<stdio.h>
#include<math.h>
int main()
{
    int count=0, negative=0;
    double number, sqroot;
    while(count<5)
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        /*if(number==9999)
            break;
        if(number<0)
        {
            printf("Number is negative.");
            negative++;
            continue;
        }*/
        sqroot=sqrt(number);
        printf("Number = %.2lf\nSquare root = %.2lf\n\n", number, sqroot);
        count++;
    }
    printf("Number of items done = %d\n", count);
    /*printf("Negative items = %d\n", negative);
    printf("END OF DATA\n");*/

}
