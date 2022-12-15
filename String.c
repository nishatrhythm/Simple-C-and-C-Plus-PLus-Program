#include<stdio.h>
int main()
{
    int i, v, c, d, s, sc;
    char text[200];
    i=v=c=d=s=sc=0;
    printf("Enter a sentence: ");
    gets(text);

    for(i=0; text[i]!='\0'; i++)
    {
        if((text[i]=='a')||(text[i]=='e')||(text[i]=='i')||(text[i]=='o')||(text[i]=='u')||(text[i]=='A')||(text[i]=='E')||(text[i]=='I')||(text[i]=='O')||(text[i]=='U'))
        {
            v++;
        }
        else if(((text[i]>='a')&&(text[i]<='z'))||((text[i]>='A')&&(text[i]<='Z')))
        {
            c++;
        }
        else if((text[i]>='0')&&(text[i]<='9'))
        {
            d++;
        }
        else if(text[i]==' ')
        {
            s++;
        }
        else
        {
            sc++;
        }
    }
    printf("\nVowel: %d", v);
    printf("\nConsonant: %d", c);
    printf("\nDigit: %d", d);
    printf("\nWhite Space: %d", s);
    printf("\nSpecial Characters: %d", sc);
}
