#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* insert(Node *, int);
Node* init(int);
void display(Node *);

int main()
{
	int T, data;
    Node *head = NULL;
	
	scanf("%d", &T);    
    while(T-- > 0) {
        scanf("%d", &data);
        head = insert(head, data);
    }
	display(head);	
}

Node *insert(Node *head, int data)
{
	Node *start, *node;
	
	start = head;
	
	// node could be initia;ized with init, but HackerRank didn't
	// allow additional methods for this problem
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

Node *init(int data)
{	
	Node *node = (Node *) malloc(sizeof(node));
	node->data = data;
	node->next = NULL;
	
	return node;
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
