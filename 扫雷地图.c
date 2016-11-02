#include <stdio.h>
#define M 106
char x[M][M];
int main()
{
    int m, n;
    while (~scanf("%d %d", &m, &n) && m>0 && n>0)
    {
        x[0][0]='.';
        getchar();
        int i, k;
        for (i=1; i<=m; i++)
        {
            for (k=1; k<=n; k++)
            {
            	x[i][k]=getchar();
            	x[0][k]='.';
            	x[k][0]='.';
            }
            getchar();
        }
        for (i=1; i<=m; i++)
        {
            for (k=1; k<=n; k++)
            {
                if (x[i][k]=='*')
                printf("*");
                else
                {
                    int sum=0, w, z;
                    for (w=-1; w<=1; w++)
                    {
                        for (z=-1; z<=1; z++)
                        {
                            if (x[i+w][k+z]=='*')
                            sum++;
                        }
                    }
                    printf("%d", sum);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}