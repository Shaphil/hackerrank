#include <stdio.h>

#define SIZE 32

int main()
{
    char c, s[SIZE], sen[SIZE];

    scanf("%c", &c);
    scanf("%s", s);
    getchar();
    scanf("%[^\n]%*c", sen);

    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
