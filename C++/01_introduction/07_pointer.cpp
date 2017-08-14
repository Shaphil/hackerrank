// Just used the HackerRank template and only updated 
// the function :(

#include <stdio.h>
#include <cstdlib>

void update(int *a, int *b)
{
    int tmp = *a + *b;
    *b = abs(*a - *b);
    *a = tmp;
}

int main() {
    int a, b;
    // int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    // update(pa, pb);
	update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
