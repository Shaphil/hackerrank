#include <stdio.h>
#include <stdlib.h>

char* kangaroo(int x1, int v1, int x2, int v2)
{
    char *result = "NO";
    int k1, k2;
    k1 = x1;
    k2 = x2;

    if (x1 > x2 && v1 >= v2)
        result = "NO";
    else if (x2 > x1 && v2 >= v1)
        result = "NO";
    else if (x1 == x2 && (v1 > v2 || v2 > v1))
        result = "NO";
    else {
        for (int i = 0; i < 2147483647; i++) {
            k1 += v1;
            k2 += v2;
            if (k1 == k2) {
                result = "YES";
                break;
            }

        }
    }
    return result;
}

int main() {
    int x1, v1, x2, v2;
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
