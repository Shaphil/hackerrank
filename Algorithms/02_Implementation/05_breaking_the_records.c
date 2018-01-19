#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, score;
    int hi, highest, lo, lowest;

    scanf("%d", &n);
    scanf("%d", &score);

    hi = lo = 0;
    highest = lowest = score;

    for (int i = 1; i < n; i++) {
        scanf("%d", &score);

        if (score > highest) {
            highest = score;
            hi++;
        }

        if (score < lowest) {
            lowest = score;
            lo++;
        }
    }

    printf("%d %d\n", hi, lo);

    return 0;
}
