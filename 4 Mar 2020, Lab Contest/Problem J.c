#include<stdio.h>
int main()
{
    float A, L, H;
    scanf("%f%f", &H, &L);
    A=((L*L)-(H*H))/(2*H);
    printf("%f", A);
}
