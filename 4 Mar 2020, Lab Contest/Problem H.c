#include<stdio.h>
int main()
{
    int n, m, i, j, x, y, x1, x2, y1, y2;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Case %d:\n", i);
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        scanf("%d", &m);
        for(j=1; j<=m; j++)
        {
            scanf("%d%d", &x, &y);
            if(((x>=x1)&&(x<=x2))&&((y>=y1)&&(y<=y2)))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
