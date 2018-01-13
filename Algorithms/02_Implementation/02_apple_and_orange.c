#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, t, a, b, m, n;
    int x, apples, oranges;

    apples = oranges = 0;

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (x + a >= s && x + a <= t)
            apples++;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x + b >= s && x + b <= t)
            oranges++;
    }

    printf("%d\n%d\n", apples, oranges);

    return 0;
}
