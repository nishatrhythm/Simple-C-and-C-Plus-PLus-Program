/** Simulation of a 100 minute spaceship flight recorder **/

#include<stdio.h>
#include<stdlib.h>

/** All fields indicate OK if 1, malfunctioning or low 0 **/

struct telemetry
{
    char fuel: 1;
    char radio: 1;
    char tv: 1;
    char water: 1;
    char food: 1;
    char waste: 1;
} flt_recd;

void display(struct telemetry i);
int main(void)
{
    FILE *fp;
    int i;

    if((fp=fopen("flight", "wb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    /** Imagine that each minute a status report of the spaceship is recorded on disk **/

    for(i=0; i<100; i++)
    {
        flt_recd.fuel=rand()%2;
        flt_recd.radio=rand()%2;
        flt_recd.tv=rand()%2;
        flt_recd.water=rand()%2;
        flt_recd.food=rand()%2;
        flt_recd.waste=rand()%2;

        display(flt_recd);
        fwrite(&flt_recd, sizeof flt_recd, 1, fp);
    }

    fclose(fp);

    return 0;
}

void display(struct telemetry i)
{
    if(i.fuel)
        printf("Fuel OK\n");
    else
        printf("Fuel low\n");

    if(i.radio)
        printf("Radio OK\n");
    else
        printf("Radio failure\n");

    if(i.tv)
        printf("TV system OK\n");
    else
        printf("TV malfunction\n");

    if(i.water)
        printf("Water supply OK\n");
    else
        printf("Water supply low\n");

    if(i.food)
        printf("Food supply OK\n");
    else
        printf("Food supply low\n");

    if(i.waste)
        printf("Waste containment OK\n");
    else
        printf("Waste containment failure\n");

    printf("\n");
}
