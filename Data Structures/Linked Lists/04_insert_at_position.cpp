#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* Insert(Node *head, int data);
Node* InsertNth(Node *head, int data, int position);
void Print(Node *head);

int main()
{
    Node *head = nullptr;

    for (int i = 0; i < 10; i++)
        head = Insert(head, i);

    Print(head);

    return 0;
}

Node* Insert(Node *head, int data)
{
    return InsertNth(head, data, -1);
}

Node* InsertNth(Node *head, int data, int position)
{
    Node *node = new Node();
    node->data = data;
    node->next = nullptr;

    if (!head)
        return node;

    // Insert first
    if (position == 0) {
        node->next = head;
        head = node;
    }
    // Insert last
    else if (position == -1) {
        Node *current = head;
        while(current->next)
            current = current->next;

        current->next = node;
    }
    // Insert at nth position
    else {
        Node *current = head;
        position--;
        while(position--)
            current = current->next;

        node->next = current->next;
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
