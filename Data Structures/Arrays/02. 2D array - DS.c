#include <stdio.h>

int main()
{
	freopen("2d_array.txt", "r", stdin);
	
	int a[6][6];
	int i, j;
	int sum, highest;
	
	sum = 0;
	highest = -2147483648;
	
	for(i = 0; i < 6; i++)
		for(j = 0; j < 6; j++)
			scanf("%d", &a[i][j]);
		
	
		
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			sum += ( a[i][j] + a[i][j + 1] + a[i][j + 2] ) ;
			sum += a[i + 1][j + 1];
			sum += ( a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2] );
			
			if(sum > highest)
				highest = sum;
		
			sum = 0;
		}
	}
	
	printf("%d\n", highest);
	
	return 0;
}