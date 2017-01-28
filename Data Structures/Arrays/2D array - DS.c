#include <stdio.h>

int main()
{
	freopen("2d_array.txt", "r", stdin);
	
	int a[6][6];
	int i, j;
	int sum, highest;
	
	sum = highest = 0;
	
	for(i = 0; i < 6; i++)
		for(j = 0; j < 6; j++)
			scanf("%d", &a[i][j]);
		
	
		
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("%d %d %d\n", a[i][j], a[i][j + 1], a[i][j + 2]);
			
			sum += ( a[i][j] + a[i][j + 1] + a[i][j + 2] ) ;
			
			printf("x %d x\n", a[i + 1][j + 1]);
			sum += a[i + 1][j + 1];
			
			printf("%d %d %d\n", a[i + 2][j], a[i + 2][j + 1], a[i + 2][j + 2]);
			sum += ( a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2] );
			
			printf("sum: %d\n", sum);
			
			if(sum > highest)
				highest = sum;
		
			sum = 0;
		}
		printf("\n");
	}
	
	printf("Highest: %d\n", highest);
	
	return 0;
}