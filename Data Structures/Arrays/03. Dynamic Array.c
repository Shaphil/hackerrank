#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	node *next;
} node;

int main()
{
	int n, q;
	int **seqList;
	int cmd, x, y;
	int i, j;
	int lastAns = 0;
	int seq;
	
	scanf("%d %d", &n, &q);
	
	seqList = malloc( n * sizeof(*seqList) );
	
	for(i = 0; i < n; i++)
		seqList[i] = malloc( q * sizeof(seqList[i]) );
	
	while(scanf("%d %d %d", &cmd, &x, &y) != EOF)
	{
		seq = (x ^ lastAns) % n;
		
		if(cmd == 1)
			
	}
}

void init(node *n, int value)
{
	n->value = 
}
