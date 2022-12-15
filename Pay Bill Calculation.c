#include<stdio.h>
#include<stdlib.h>
int main()
{
    int level;
    float basic_pay, house_rent, net_sal, tax, gross_sal, perk;
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    switch(level)
    {
    case 1:
        printf("Enter basic pay: ");
        scanf("%f", &basic_pay);
        perk=1000+500;
        break;
    case 2:
        printf("Enter basic pay: ");
        scanf("%f", &basic_pay);
        perk=750+200;
        break;
    case 3:
        printf("Enter basic pay: ");
        scanf("%f", &basic_pay);
        perk=800+100;
        break;
    case 4:
        printf("Enter basic pay: ");
        scanf("%f", &basic_pay);
        perk=250;
        break;
    default:
        printf("\nWrong level input!\n\n");
        exit(0);

    }

    house_rent=(basic_pay+perk)*0.25;
    gross_sal=basic_pay+house_rent+perk;

    if(gross_sal<=2000)
    {
        tax=0;
    }
    else if(gross_sal>2000&&gross_sal<=4000)
    {
        tax=gross_sal*0.03;
    }
    else if(gross_sal>4000&&gross_sal<=5000)
    {
        tax=gross_sal*0.05;
    }
    else if (gross_sal>5000)
    {
        tax=gross_sal*0.08;
    }

    net_sal=gross_sal-tax;
    printf("\nNet Salary: tk %.2f only.\n\n", net_sal);

    return 0;
}
