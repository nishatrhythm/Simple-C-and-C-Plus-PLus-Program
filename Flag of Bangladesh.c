#include<stdio.h>
int main()
{
    int i, n, l;
    double w, r, areacircle, areagreen, areaflag;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &l);
        w = l * .6;
        r = (double)l/5;
        areaflag = l * w;
        areacircle = 3.1416 * r * r;
        areagreen = areaflag - areacircle;
        printf("%.2lf %.2lf\n", areacircle, areagreen);
    }
    return 0;
}
