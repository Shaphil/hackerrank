#include <stdio.h>

#define SIZE 7

int main()
{
    long long n;
    char mapping[10][SIZE] = {
        "",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };

    scanf("%lld", &n);

    if (n >= 1 && n <= 9) {
        printf("%s\n", mapping[n]);
    }
    else {
        printf("Greater than 9\n");
    }

    return 0;
}
