#include <stdio.h>

int main()

{

    float km, hr, mt, sec, speed;

    printf("Hello! Welcome to here.\nThis program is written in C and will show you the velocity of a car if you give the total displacement and the time duration of that car.\n\n");

    printf("So please enter the distance that how much Kilometre(s) the car has been gone: ");

    scanf("%f", &km);

    printf("\n\nEnter how much time needed then (in hours): ");

    scanf("%f", &hr);

    mt=1000*km;

    sec=60*60*hr;

    speed=mt/sec;

    printf("\n\nThe velocity of the car is: %.2f m/s", speed);

    printf("\n\nThanks for using this program.");

    return 0;

}
