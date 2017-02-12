#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* init(int);
Node* insert(Node *, int);
Node* removeDuplicates(Node *);
void display(Node *);

int main()
{
	freopen("d24_more_linked_list.txt", "r", stdin);
	
	int T, data;
    Node *head = NULL;
	
	scanf("%d", &T);    
    while(T-- > 0) {
        scanf("%d", &data);
        head = insert(head, data);
    }
	head = removeDuplicates(head);
	display(head);
	
	return 0;
}

Node* init(int data)
{	
	Node *node = (Node *) malloc(sizeof(node));
	node->data = data;
	node->next = NULL;
	
	return node;
}

Node* insert(Node *head, int data)
{
	Node *start, *node;
	
	start = head;
	
	node = (Node *) malloc(sizeof(node));
	node->data = data;
	node->next = NULL;
	
	if(head == NULL) {
		head = node;
		start = node;
	}
	else {
		while(start->next) {
			start = start->next;
		}
		start->next = node;
		start = node;
	}
	
	return head;
}

// 1. Fails to remove duplicates if all nodes has the same value.
// 2. TLE in one case, not examined yet
Node* removeDuplicates(Node *head)
{
	Node *i, *j;
	
	for(i = head; i->next != NULL; i = i->next) {
		printf("i->data: %d\n", i->data);
		printf("j->data: ");
		
		for(j = head; j->next != NULL; j = j->next) {
			printf("%d ", j->data);
			
			if(i->data == j->next->data && j->next->next != NULL)
				i->next = j->next->next;
		}
		printf("\n");
	}
	
	printf("i->data: %d\n", i->data);
	printf("j->data: %d\n", j->data);
	
	// tried to remove last duplicate
	// if(i->data == j->next->data)
		// j->next = NULL;
	
	return head;
}

void display(Node *head)
{
	Node *start = head;
	while(start)
	{
		printf("%d ", start->data);
		start = start->next;
	}
}
