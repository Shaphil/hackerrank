#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main()
{
	freopen("d20_sorting.txt", "r", stdin);
	int n;
	int numberOfSwaps = 0;
	
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    
	for(int a_i = 0; a_i < n; a_i++) {
       scanf("%d", &a[a_i]);
    }
	
	for (int i = 0; i < n; i++) {
    
		for (int j = 0; j < n - 1; j++) {
			// Swap adjacent elements if they are in decreasing order
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
				numberOfSwaps++;
			}
		}
		
		// If no elements were swapped during a traversal, array is sorted
		if (numberOfSwaps == 0) {
			break;
		}
	}
	
	printf("Array is sorted in %d swaps.\n", numberOfSwaps);
	printf("First Element: %d\n", a[0]);
	printf("Last Element: %d\n", a[n - 1]);
	
    return 0;
}

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}