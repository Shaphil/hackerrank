#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
} Node;

Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->left = node->right = NULL;
    node->data = data;
    return node;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int getHeight(Node* root) {
	if(root)
		return 1 + max(getHeight(root->left), getHeight(root->right));
	else
		return -1;
}

Node* insert(Node* root, int data)
{
    if(root == NULL)
        return newNode(data);
    else {
        Node* cur;
        if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
        }
        else {
            cur = insert(root->right, data);
            root->right = cur;
        }        
    }
    return root;
}

int main()
{
	freopen("d22_bst.txt", "r", stdin);
	
    Node* root = NULL;
    int T, data;
    scanf("%d", &T);
    while(T-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
    int height = getHeight(root);
    printf("%d\n", height);
	
    return 0;    
}
