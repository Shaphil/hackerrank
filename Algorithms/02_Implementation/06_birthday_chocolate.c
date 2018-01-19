#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, d, m, sum, count;
    sum = count = 0;

    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);

    scanf("%d %d", &d, &m);

    for (int i = 0; i < n - m + 1; i++) {
        for (int j = i; j < i + m; j++)
            sum += s[j];

        if (sum == d)
            count++;

        sum =  0;
    }

    printf("%d\n", count);

    return 0;
}
