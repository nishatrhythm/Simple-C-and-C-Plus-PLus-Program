#include<stdio.h>
int main()
{
    int tk, one_thousand, five_hundred, one_hundred, fifty, twenty, ten, five, two;
    printf("Enter total amount of taka: ");
    scanf("%d", &tk);

    one_thousand=tk/1000;
    tk=tk%1000;
    five_hundred=tk/500;
    tk=tk%500;
    one_hundred=tk/100;
    tk=tk%100;
    fifty=tk/50;
    tk=tk%50;
    twenty=tk/20;
    tk=tk%20;
    ten=tk/10;
    tk=tk%10;
    five=tk/5;
    tk=tk%5;
    two=tk/2;
    tk=tk%2;

    printf("\nEquivalent Bank Note(s):\n\n\t\t\t 1000tk Note = %d\n\t\t\t 500tk Note = %d\n\t\t\t 100tk Note = %d\n\t\t\t 50tk Note = %d\n\t\t\t 20tk Note = %d\n\t\t\t 10tk Note = %d\n\t\t\t 5tk Note = %d\n\t\t\t 2tk Note = %d\n\t\t\t 1tk Note =  %d\n\n", one_thousand, five_hundred, one_hundred, fifty, twenty, ten, five, two, tk);

    return 0;
}

