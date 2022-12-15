#include<stdio.h>
int main()
{
    int year, month, week, day;

    printf("Hi! Welcome here. This program is like a converter.\nIf you input any integer number, the program will convert the number into its equivalent Year(s), Month(s), Week(s) and Day(s).");
    printf("\n\nSo, at first please enter an integer value: ");
    scanf("%d", &day);

    year=day/365;
    day=day%365;
    month=day/30;
    day=day%30;
    week=day/7;

    printf("\nEquivalent integer value is: %d Year(s), %d Month(s), %d Week(s) and %d day(s).", year, month, week, day);

    printf("\n\nThanks for using this program.\n\n\n");

    return 0;
}
