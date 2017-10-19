#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* init(int data);
Node* add(Node *head, int data);
void Print(Node *head);

int main()
{
    Node *head = nullptr;

    for (int i = 0; i < 10; i++)
        head = add(head, i);

    Print(head);

    return 0;
}

Node* init(int data)
{
    Node *node = new Node();
    node->data = data;
    node->next = nullptr;

    return node;
}

Node* add(Node *head, int data)
{
    Node *node = init(data);

    if (!head)
        return node;
    else {
        Node *current = head;
        while(current->next)
            current = current->next;

        current->next = node;
    }
    return head;
}

void Print(Node *head)
{
    Node *current = head;
    while(current) {
        cout << current->data << endl;
        current = current->next;
    }
}
