#include <stdio.h>
#include <stdlib.h>

int* solve(int grades_size, int* grades, int *result_size){
    for (int i = 0; i < grades_size; i++) {
        if (grades[i] >= 38) {
            int div = grades[i] / 5;
            int multiple = (div + 1) * 5;
            if (multiple - grades[i] < 3)
                grades[i] = multiple;
        }
    }

    *result_size = grades_size;
    return grades;
}

int main() {
    int n;
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
