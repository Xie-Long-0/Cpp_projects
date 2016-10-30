#include <stdio.h>
int main()
{
    int m, n;
    while( scanf("%d %d", &m, &n) != EOF && m>0 && n>0)
    {
        char x[m+2][n+2];
        getchar();
        for(int i=1; i<=m; i++)
        {
            for(int k=1; k<=n; k++)  x[i][k]=getchar();
            getchar();
        }
        char s[m+2][n+2];
        for(int i=1; i<=m; i++)
        {
            for(int k=1; k<=n; k++)
            {
                if(x[i][k]=='*')  s[i][k]='*';
                else
                {
                    int sum=0;
                    for(int w=-1; w<=1; w++)
                    {
                        for(int z=-1; z<=1; z++)
                        {
                            if(x[i+w][k+z]=='*')  sum++;
                        }
                    }
                    s[i][k]=48+sum;
                }
                printf("%c", s[i][k]);
            }
            printf("\n");
        }
    }
    return 0;
}