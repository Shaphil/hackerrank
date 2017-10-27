#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* Insert(Node *head, int data);
Node* InsertNth(Node *head, int data, int position);
Node* Delete(Node *head, int position);
Node* Reverse(Node *head);
void Print(Node *head);
void ReversePrint(Node *head);

int main()
{
    Node *head = nullptr;

    for (int i = 0; i < 10; i++)
        head = Insert(head, i);

    Print(head);

    head = Delete(head, 0);
    Print(head);

    head = Delete(head, 5);
    Print(head);

    head = Delete(head, 7);
    Print(head);

    head = Reverse(head);
    Print(head);

    ReversePrint(head);

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

Node* Delete(Node *head, int position)
{
    if (!head)
        return nullptr;

    Node *current = head;
    if (position == 0) {
        head = head->next;
        delete(current);
        current = nullptr;
    }
    else {
        position--;
        while(position--)
            current = current->next;

        if (current->next->next) {
            Node *temp = current->next;
            current->next = current->next->next;
            delete(temp);
            temp = nullptr;
        }
        else {
            delete(current->next);
            current->next = nullptr;
        }
    }
    return head;
}

Node* Reverse(Node *head)
{
    Node *current = head;
    Node *reverse_head = nullptr;

    // Build a reversed list by adding elements of current
    // list to the head, which kind of looks like a stack.
    while(current) {
        Node *node = new Node();
        node->data = current->data;
        node->next = nullptr;

        if(!reverse_head)
            reverse_head = node;
        else {
            node->next = reverse_head;
            reverse_head = node;
        }
        current = current->next;
    }
    return reverse_head;
}

void Print(Node *head)
{
    Node *current = head;
    while(current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void ReversePrint(Node *head)
{
    Node *current = head;
    Node *reverse_head = nullptr;

    // Build a reversed list by adding elements of current
    // list to the head, which kind of looks like a stack.
    while(current) {
        Node *node = new Node();
        node->data = current->data;
        node->next = nullptr;

        if(!reverse_head)
            reverse_head = node;
        else {
            node->next = reverse_head;
            reverse_head = node;
        }
        current = current->next;
    }

    current = reverse_head;
    while(current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    delete(reverse_head);
    reverse_head = nullptr;
}
