#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* Insert(Node *head, int data);
Node* InsertNth(Node *head, int data, int position);
Node* RemoveDuplicates(Node *head);
void Print(Node *head);

int main()
{
    Node *head = nullptr;

    for (int i = 0; i < 10; i++) {
        if (i % 4 == 0) {
            for (int j = 0; j < 5; j++)
                head = Insert(head, i);
        }
        else
            head = Insert(head, i);
    }

    Print(head);
    head = RemoveDuplicates(head);
    Print(head);

    return 0;
}

Node* RemoveDuplicates(Node *head)
{
    Node *root = nullptr;
    Node *current_head = head;
    Node *current_root = nullptr;

    if (!head)
        return head;

    while (current_head) {
        Node *node = new Node();
        node->data = current_head->data;
        node->next = nullptr;

        if (!root)
            root = current_root = node;

        if (current_root->data != current_head->data) {
            current_root->next = node;
            current_root = node;
            current_head = current_head->next;
        }
        else
            current_head = current_head->next;
    }

    return root;
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
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
