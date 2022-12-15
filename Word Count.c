#include<stdio.h>
int main()
{
    int i, count=0;
    char text[100];
    printf("Enter a sentence: ");
    gets(text);

    for(i=0; text[i]!='\0'; i++)
    {
        if(text[i]==' ')
            count++;
    }
    printf("\nWord Number: %d\n\n", count+1);

    return 0;
}


//scanf() does not work. Program incomplete, execution failed!
/*#include<stdio.h>
#include<string.h>
int main()
{
    int i, count=0;
    char text[100];

    printf("Enter a sentence: ");
    scanf("%s", &text[i]);

    int p=strlen(text);

    for(i=0; i<p; i++)
    {
        if(text[i]==' ')
        {
            count++;
        }
    }
    printf("\nWord Number: %d\n\n", count+1);

    return 0;
}*/
