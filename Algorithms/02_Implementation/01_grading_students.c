#include <stdio.h>

int main()
{
    int n, grade, div, multiple;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &grade);
        if (grade >= 38) {
            div = grade / 5;
            multiple = (div + 1) * 5;
            if (multiple - grade < 3)
                grade = multiple;
        }
        printf("%d\n", grade);
    }

    return 0;
}
