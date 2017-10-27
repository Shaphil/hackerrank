#include <stdio.h>
#include <stdlib.h>

typedef struct dyn_array {
	int *data;
	size_t size;
} node;

void init(node *);
void insert(node *, int);

int main()
{
    freopen("03.dynamic_array.txt", "r", stdin);

    int n, q, cmd, x, y, lastAns = 0;
    int i, j;
    int c = 0;
    int seq, elem;

    scanf("%d %d", &n, &q);
    node seqList[n];

    for(i = 0; i < n; i++)
        init(&seqList[i]);

    while(c < q)
    {
        scanf("%d %d %d", &cmd, &x, &y);
        if(cmd == 1)
        {
            seq = (x ^ lastAns) % n;
            insert(&seqList[seq], y);
        }
        else
        {
            seq = (x ^ lastAns) %n;
            lastAns = seqList[seq].data[y];
            printf("%d\n", lastAns);
        }

        c++;
    }

    for(i = 0; i < n; i++)
        free(seqList[i].data);

    return 0;
}

void init(node *n)
{
	n->data = NULL;
	n->size = 0;
}

void insert(node *n, int value)
{
	n->size++;

	if(n->data == NULL)
		n->data = (int *) malloc(n->size * sizeof(n->data));
	else
		n->data = realloc(n->data, n->size * sizeof(n->data[0]));

	n->data[n->size - 1] = value;
}
