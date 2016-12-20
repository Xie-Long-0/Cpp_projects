#include <stdio.h>

int is_y(int y)
{
    if (y % 400 == 0) return 1;
    if (y % 100 == 0) return 0;
    if (y % 4 == 0) return 1;
    return 0;
}

int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int T, y, m, d, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d%d", &y, &m, &d);

        int ans = 0;
        for (i = 1; i < y; i++)
        {
            ans += is_y(i) ? 366 : 365;
        }

        for (i = 1; i < m; i++)
        {
            ans += month[i];
            if (i == 2 && is_y(y)) ans++;
        }

        ans += d;
        printf("%d\n", ans);
    }
    return 0;
}