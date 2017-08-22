#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("in.txt", "r", stdin);

    int n, q, k, i, j, x, y;
    scanf("%d %d", &n, &q);

    int *p[n];
    for(x = 0; x < n; x++){
        scanf("%d", &k);

        // Taking one extra element
        p[x] = malloc(sizeof(int) * (k + 1));

        // so that you can store the size of the array
        // in that extra element
        p[x][0] = k + 1;
        for(y = 1; y < k + 1; y++) {
            scanf("%d", &p[x][y]);
        }
    }

    for(x = 0; x < q; x++) {
        scanf("%d %d", &i, &j);
        printf("%d\n", p[i][j + 1]);
    }

    return 0;
}
