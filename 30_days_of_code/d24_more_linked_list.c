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

Node* removeDuplicates(Node *head)
{
	Node *i, *j, *p;
	
	for(i = head; i != NULL; i = i->next) {		
		for(j = i->next, p = i; j != NULL; j = j->next) {			
			if(i->data == j->data) {
				if(j->next != NULL)
					p->next = j->next;
				else
					p->next = NULL;
			}
			else
				p = p->next;
		}
	}
	
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
