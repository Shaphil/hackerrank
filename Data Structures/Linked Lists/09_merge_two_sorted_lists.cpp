#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* Insert(Node *head, int data);
Node* InsertNth(Node *head, int data, int position);
Node* MergeLists(Node *headA, Node* headB);
void Print(Node *head);

int main()
{
    Node *odd = nullptr;
    Node *even = nullptr;

//    for (int i = 0; i < 20; i++) {
//        if (i % 2)
//            odd = Insert(odd, i);
//    }
//    for (int i = 10; i < 30; i++) {
//        if (i % 2 == 0)
//            even = Insert(even, i);
//    }
    even = Insert(even, 1);
    even = Insert(even, 2);


    Node *merged = MergeLists(odd, even);
    Print(merged);

    return 0;
}

Node* MergeLists(Node *headA, Node *headB)
{
    // new merged list
    Node *root, *last;
    root = last = nullptr;

    while (headA && headB) {
        Node *node = new Node();
        node->next = nullptr;

        if (headA->data < headB->data) {
            node->data = headA->data;
            if (!root)
                last = root = node;

            last->next = node;
            last = last->next;
            headA = headA->next;
        }
        else {
            node->data = headB->data;
            if (!root)
                last = root = node;

            last->next = node;
            last = last->next;
            headB = headB->next;
        }
    }

    while (headA) {
        Node *node = new Node();
        node->data = headA->data;
        node->next = nullptr;

        if (!root)
            last = root = node;

        last->next = node;
        last = last->next;
        headA = headA->next;
    }

    while (headB) {
        Node *node = new Node();
        node->data = headB->data;
        node->next = nullptr;

        if (!root)
            last = root = node;

        last->next = node;
        last = last->next;
        headB = headB->next;
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
