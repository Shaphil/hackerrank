#include <stdio.h>
#include <stdlib.h>

void solve(int grades_size, int* grades){
    for (int i = 0; i < grades_size; i++) {
        if (grades[i] >= 38) {
            int div = grades[i] / 5;
            int multiple = (div + 1) * 5;
            if (multiple - grades[i] < 3)
                grades[i] = multiple;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    solve(n, grades);
    for(int i = 0; i < n; i++) {
        if(i) {
            printf("\n");
        }
        printf("%d", grades[i]);
    }
    puts("");


    return 0;
}
