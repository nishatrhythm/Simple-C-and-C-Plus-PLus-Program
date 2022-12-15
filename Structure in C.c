#include<stdio.h>
#include<conio.h>

struct student
{
    char name[20];
    int roll;
    float mark;

};

int main()
{
    int i, j, n;
    struct student s[10];
    printf("How many students?\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("\n\nEnter Name of Sl. %d: ", i);
        scanf("%s", &s[i].name);
        printf("Enter Roll of Sl. %d: ", i);
        scanf("%d", &s[i].roll);
        printf("Enter Marks of Sl. %d: ", i);
        scanf("%f", &s[i].mark);
    }

    printf("\n Name \t Roll \t Mark \n");
    printf("...........................\n");
    for(j=1; j<=n; j++)
    {
        printf("\n %s \t %d \t %.2f", s[j].name, s[j].roll, s[j].mark);
    }
    return 0;
}
