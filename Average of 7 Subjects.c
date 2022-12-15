#include <stdio.h>

int main()

{

    float ban, eng, hmath, phy, chem, bio, ict, avg;

    printf("Hello! Welcome to here.\nThis program is about to calculate the average marks of 7 subjects in intermediate level.\nSo please enter the individual marks of those subjects one by one.\n\n");

    printf("Bangla: ");

    scanf("%f", &ban);

    printf("\n\nEnglish: ");

    scanf("%f", &eng);

    printf("\n\nHigher Mathematics: ");

    scanf("%f", &hmath);

    printf("\n\nPhysics: ");

    scanf("%f", &phy);

    printf("\n\nChemistry: ");

    scanf("%f", &chem);

    printf("\n\nBiology: ");

    scanf("%f", &bio);

    printf("\n\nICT: ");

    scanf("%f", &ict);

    avg=(ban+eng+hmath+phy+chem+bio+ict)/7;

    printf("\n\nAverage of the 7 subjects is: %.2f", avg);

    printf("\n\nThanks for using this program.");

    return 0;

}
